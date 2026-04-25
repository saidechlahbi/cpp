#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <stdexcept>
#include <algorithm>

class PmergeMe {
private:
    std::vector<int> _vec;
    std::deque<int>  _deq;
    
    double _vecTime;
    double _deqTime;

    // Helper functions
    void checkInput(char** argv);
    void printSequence(const std::string& prefix, const std::vector<int>& seq) const;
    std::vector<size_t> generateJacobsthal(size_t n);

    // Vector implementation
    void sortVector();
    void mergeInsertSort(std::vector<int>& arr);
    
    // Deque implementation
    void sortDeque();
    void mergeInsertSort(std::deque<int>& arr);

public:
    PmergeMe();
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
    ~PmergeMe();

    void execute(int argc, char** argv);
};