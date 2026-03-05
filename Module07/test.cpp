#include  <iostream>

template <class T>
T min(T a, T b)
{
    if (a > b)
        return b;
    else
        return a;
}

template <class T>
T max(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

template <class T>
T swap(T a, T b)
{
   T c = a;
   a = b;
   b = c;
}

int main ()
{
    int a = 5, b = 6;
    std::cout << max<int>(a, b) << std::endl;
}