#include <iostream>


bool GCD(long n, long d)
{
    while (n != d)
        if (n > d)
            n -= d;
        else
            d -= n;


    if (n == 1)
        return true;
    else
        return false;
}

long long properFractions(long long d) 
{

    long counter = 0;

    for (long n = 1; n < d; n++)
    {
        if (GCD(n, d) == true)
            counter++;

    }

    return counter;

}

int main()
{
    
    std::cout << "Type a denominator of a fraction\n";
    long d;
    std::cin >> d;
    std::cout << "Total number of proper fractions is: ";
    std::cout << properFractions(d);

}