#include "MutantStack.hpp"

int main()
{
    std::cout << "--- MutantStack Test ---" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Top: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Size: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::cout << "\n--- std::list Comparison ---" << std::endl;
    std::list<int> ltest;
    ltest.push_back(5);
    ltest.push_back(17);
    ltest.pop_back();
    ltest.push_back(3);
    ltest.push_back(5);
    ltest.push_back(737);
    ltest.push_back(0);

    std::list<int>::iterator lit = ltest.begin();
    std::list<int>::iterator lite = ltest.end();
    while (lit != lite)
    {
        std::cout << *lit << std::endl;
        ++lit;
    }
    
    return 0;
}