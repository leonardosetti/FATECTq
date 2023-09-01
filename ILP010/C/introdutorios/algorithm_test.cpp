#include <iostream>
#include <iomanip>

int main()
{
    double N1, N2;
    
    N1 = 122.345;
    N2 = 0.02123;

    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << N1;
    std::cout << N2;

}