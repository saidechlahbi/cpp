#include <iostream>
#include <ctime>
// class casee
// {
//     public:
//         int a;
//         static int total;
//         casee (int a)
//         {
//             this->a = a;
//         }
//         void f()
//         {
//             total += a;
//         }
//         int totaal()
//         {
//             return total;
//         }
// };

// int casee::total = 0;

int main()
{
    
    // casee a(5);
    // a.f();
    // casee b(5);
    // b.f();
    // casee c(5);
    // c.f();

    
    // std::cout << a.totaal() << std::endl;
    std::time_t now  = time(NULL);

    std::tm *local_time = std::localtime(&now);
    std::cout << "[" << local_time->tm_year + 1900 
    << local_time->tm_mon + 1 
    << local_time->tm_mday << "_"
    << local_time->tm_hour
    << local_time->tm_min
    << local_time->tm_sec << "]";
}


