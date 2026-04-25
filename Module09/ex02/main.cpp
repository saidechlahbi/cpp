#include "PmergeMe.hpp"

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Error: Not enough arguments." << std::endl;
        return 1;
    }

    PmergeMe sorter;
    sorter.execute(argc, argv);

    return 0;
}