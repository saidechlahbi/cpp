#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : _vecTime(0), _deqTime(0) {}

PmergeMe::PmergeMe(const PmergeMe& other) { *this = other; }

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
    if (this != &other) {
        this->_vec = other._vec;
        this->_deq = other._deq;
        this->_vecTime = other._vecTime;
        this->_deqTime = other._deqTime;
    }
    return *this;
}

PmergeMe::~PmergeMe() {}

void PmergeMe::checkInput(char** argv) {
    for (int i = 1; argv[i]; ++i) {
        std::string arg = argv[i];
        if (arg.empty())
            throw std::runtime_error("Error: empty argument found.");
        
        size_t start = 0;

        // If the string starts with '+', advance the starting point to skip it
        if (arg[0] == '+') {
            start = 1;
        }

        // Now just loop from the starting point and verify everything is a digit
        for (size_t j = start; j < arg.length(); ++j) {
            if (!isdigit(arg[j])) {
                throw std::runtime_error("Error: invalid character found.");
            }
        }
        
        long val = std::atol(arg.c_str());
        if (val < 0 || val > 2147483647)
            throw std::runtime_error("Error: number out of range.");
            
        _vec.push_back(static_cast<int>(val));
        _deq.push_back(static_cast<int>(val));
    }
}

void PmergeMe::printSequence(const std::string& prefix, const std::vector<int>& seq) const {
    std::cout << prefix;
    size_t limit;

    if (seq.size() > 5) {
        limit = 5;
    } else {
        limit = seq.size();
    }
    for (size_t i = 0; i < limit; ++i) {
        std::cout << seq[i] << " ";
    }
    if (seq.size() > 5) std::cout << "[...]";
    std::cout << std::endl;
}

// Generates the Jacobsthal insertion sequence for a given size
std::vector<size_t> PmergeMe::generateJacobsthal(size_t n) {
    std::vector<size_t> jacob;
    std::vector<size_t> sequence;
    if (n == 0)
        return sequence;

    jacob.push_back(0);
    jacob.push_back(1);
    
    // Generate standard Jacobsthal numbers (0, 1, 1, 3, 5, 11, 21...)
    while (true) {
        size_t next = jacob[jacob.size() - 1] + 2 * jacob[jacob.size() - 2];
        jacob.push_back(next);
        if (next > n)
            break;
    }

    // Build the specific reverse-insertion sequence based on Jacobsthal groups
    size_t last_j = 1;
    for (size_t i = 3; i < jacob.size(); ++i) {
        size_t j = jacob[i];
        if (j > n)
            j = n; // Cap at the maximum size

        // Insert backwards from current Jacobsthal down to the previous one
        for (size_t k = j; k > last_j; --k) {
            sequence.push_back(k - 1); // -1 because index is 0-based
        }
        last_j = j;
        if (j == n)
            break;
    }
    return sequence;
}

// ---- Vector Implementation ----
void PmergeMe::mergeInsertSort(std::vector<int>& arr) {
    if (arr.size() <= 1)
        return;

    bool hasStraggler = (arr.size() % 2 != 0);
    int straggler = 0;
    if (hasStraggler) {
        straggler = arr.back();
        arr.pop_back();
    }

    std::vector< std::pair<int, int> > pairs;
    for (size_t i = 0; i < arr.size(); i += 2) {
        if (arr[i] > arr[i+1])
            pairs.push_back(std::make_pair(arr[i], arr[i+1]));
        else
            pairs.push_back(std::make_pair(arr[i+1], arr[i]));
    }

    // Recursively sort the pairs based on the winners (first element)
    // To do this, we extract the winners, sort them, and then rebuild the pairs.
    // (A true implementation sorts the pairs directly, but extracting is cleaner in C++98)
    std::vector<int> mainChain;
    std::vector<int> pendChain;
    
    // Simple sort of pairs based on the first element (the winner)
    for (size_t i = 0; i < pairs.size() - 1; ++i) {
        for (size_t j = i + 1; j < pairs.size(); ++j) {
            if (pairs[i].first > pairs[j].first) {
                std::swap(pairs[i], pairs[j]);
            }
        }
    }

    for (size_t i = 0; i < pairs.size(); ++i) {
        mainChain.push_back(pairs[i].first);
        pendChain.push_back(pairs[i].second);
    }

    // Step 4: Base Insertion (The Freebie)
    mainChain.insert(mainChain.begin(), pendChain[0]);

    // Step 5: Jacobsthal Insertion
    std::vector<size_t> jacobSeq = generateJacobsthal(pendChain.size());
    
    for (size_t i = 0; i < jacobSeq.size(); ++i) {
        size_t idx = jacobSeq[i];
        if (idx == 0)
            continue; // Already inserted

        int value = pendChain[idx];
        std::vector<int>::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), value);
        mainChain.insert(pos, value);
    }

    // Step 6: Straggler Insertion
    if (hasStraggler) {
        std::vector<int>::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), straggler);
        mainChain.insert(pos, straggler);
    }

    arr = mainChain;
}

void PmergeMe::sortVector() {
    std::clock_t start = std::clock();
    mergeInsertSort(_vec);
    std::clock_t end = std::clock();
    _vecTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000.0;
}

// ---- Deque Implementation (Exact same logic as Vector) ----
void PmergeMe::mergeInsertSort(std::deque<int>& arr) {
    if (arr.size() <= 1) return;

    bool hasStraggler = (arr.size() % 2 != 0);
    int straggler = 0;
    if (hasStraggler) {
        straggler = arr.back();
        arr.pop_back();
    }

    std::deque< std::pair<int, int> > pairs;
    for (size_t i = 0; i < arr.size(); i += 2) {
        if (arr[i] > arr[i+1]) pairs.push_back(std::make_pair(arr[i], arr[i+1]));
        else pairs.push_back(std::make_pair(arr[i+1], arr[i]));
    }

    std::deque<int> mainChain;
    std::deque<int> pendChain;
    
    for (size_t i = 0; i < pairs.size() - 1; ++i) {
        for (size_t j = i + 1; j < pairs.size(); ++j) {
            if (pairs[i].first > pairs[j].first) {
                std::swap(pairs[i], pairs[j]);
            }
        }
    }

    for (size_t i = 0; i < pairs.size(); ++i) {
        mainChain.push_back(pairs[i].first);
        pendChain.push_back(pairs[i].second);
    }

    mainChain.insert(mainChain.begin(), pendChain[0]);

    std::vector<size_t> jacobSeq = generateJacobsthal(pendChain.size());
    
    for (size_t i = 0; i < jacobSeq.size(); ++i) {
        size_t idx = jacobSeq[i];
        if (idx == 0) continue;

        int value = pendChain[idx];
        std::deque<int>::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), value);
        mainChain.insert(pos, value);
    }

    if (hasStraggler) {
        std::deque<int>::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), straggler);
        mainChain.insert(pos, straggler);
    }

    arr = mainChain;
}

void PmergeMe::sortDeque() {
    std::clock_t start = std::clock();
    mergeInsertSort(_deq);
    std::clock_t end = std::clock();
    _deqTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000.0;
}

// ---- Execution ----
void PmergeMe::execute(int argc, char** argv) {
    (void) argc;
    try {
        checkInput(argv);
        printSequence("Before:   ", _vec);
        
        sortVector();
        sortDeque();
        
        printSequence("After:    ", _vec);
        
        std::cout << "Time to process a range of " << _vec.size() 
                  << " elements with std::vector : " 
                  << std::fixed << std::setprecision(5) << _vecTime << " us" << std::endl;
                  
        std::cout << "Time to process a range of " << _deq.size() 
                  << " elements with std::deque  : " 
                  << std::fixed << std::setprecision(5) << _deqTime << " us" << std::endl;

    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}