#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <cstdlib>
#include <ctime>

Base * generate(void)
{
    std::srand(std::time(0));
    int random_number = std::rand() % 3;
    switch (random_number)
    {
        case 0:
            std::cout << "Generated: A" << std::endl;
            return new A();
            break;
        case 1:
            std::cout << "Generated: B" << std::endl;
            return new B();
            break;
        case 2:
            std::cout << "Generated: C" << std::endl;
            return new C();
            break;
        default:
            return NULL;
            break;
    }
}
void identify(Base* p)
{
    if (dynamic_cast<A *>(p))
    {
        std::cout << "A type" << std::endl;
        return;
    }
    if (dynamic_cast<B *>(p))
    {
        std::cout << "B type" << std::endl;
        return;
    }
    if (dynamic_cast<C *>(p))
    {
        std::cout << "C type" << std::endl;
        return;
    }
    std::cout << "Unknown type" << std::endl;
}

void identify(Base& p)
{
    std::cout << "Identify by reference: ";
    
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    }
    catch(std::exception& e)
    {
    }
    
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    }
    catch(std::exception& e)
    {
    }
    
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    }
    catch(std::exception& e)
    {
    }
    
    std::cout << "Unknown type" << std::endl;
}


int main()
{
    std::cout << "=== Test 1 ===" << std::endl;
    Base* obj1 = generate();
    identify(obj1);
    identify(*obj1);
    delete obj1;
    
    std::cout << "\n=== Test 2 ===" << std::endl;
    Base* obj2 = generate();
    identify(obj2);
    identify(*obj2);
    delete obj2;
    
    std::cout << "\n=== Test 3 ===" << std::endl;
    Base* obj3 = generate();
    identify(obj3);
    identify(*obj3);
    delete obj3;
    
    std::cout << "\n=== Manual Tests ===" << std::endl;
    
    A a;
    B b;
    C c;
    
    std::cout << "\nTesting A:" << std::endl;
    identify(&a);
    identify(a);
    
    std::cout << "\nTesting B:" << std::endl;
    identify(&b);
    identify(b);
    
    std::cout << "\nTesting C:" << std::endl;
    identify(&c);
    identify(c);
    
    return 0;
}