#include <iostream>
#include<cmath>


double power(int base, int exponent)
{
    double result = 1;
    for(int i=1; i < exponent+1;i++ )
    {
        result = result*base;
    }

    return result;
}

void populate_base_exponent(int *b, int *e)
{   
    std::cout << "What is the base number? ";
    std::cin >> *b;
    std::cout << "What is the exponent? ";
    std::cin >> *e;
}

int main()
{
    int base, exponent;
    populate_base_exponent(&base, &exponent);
    double myPower = power(base, exponent);
    std::cout << myPower << std::endl;
    return 0;
}