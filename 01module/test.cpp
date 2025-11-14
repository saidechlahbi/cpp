#include <iostream>
#include <fstream>

// class dog
// {
//     public:
//     static void foo()
//     {
//         std::cout << "foo" << std::endl;
//     }
//     void boo()
//     {
//         std::cout << "boo" << std::endl;
//     }
// };

// int main ()
// {
//     dog cat;
//     // void (dog::*function_pointer)() =&dog::foo;
//     // (cat.*function_pointer)();

//     void (*function_pointer)() =&dog::foo;
//     function_pointer();

//     // dog cat;
//     // void (dog::*function_pointer[])() =
//     // {
//     //     &dog::foo,
//     //     &dog::boo
//     // };
//     // (cat.*function_pointer[0])();
// }


int main (int ac, char **av)
{
    std::string s1 = av[2];
    std::string s2 = av[3];

    std::ifstream infile(av[1], std::ios::in);
    if (!infile.is_open())
    {
        std::cerr << "Failed to open " << av[1] << std::endl;
        return 1;
    }
    std::string rep = av[1];
    rep = rep + ".replace";
    std::ofstream outfile(rep, std::ios::in);
    if (!infile.is_open())
    {
        std::cerr << "Failed to open " << rep << std::endl;
        return 1;
    }
    
    std::cout << std::endl;
}
