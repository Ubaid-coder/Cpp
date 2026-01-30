#include <iostream>

template <typename T, typename U>

 // ----------Function Template ---------
auto max(T x, U y)
{
    return (x > y) ? x : y;
}

/*
    -------OverLoad Function---------
double max(double x, double y)
{
    return (x > y) ? x : y;
}

char max(char x, char y)
{
    return (x > y) ? x : y;
}
*/

int main()
{
    std::cout << max(12, 1) << '\n';
    std::cout << max(1.999, 2.1) << '\n';
    std::cout << max(5.765, -7.4) << '\n';
    std::cout << max('0', '4') << '\n';
    return 0;
}