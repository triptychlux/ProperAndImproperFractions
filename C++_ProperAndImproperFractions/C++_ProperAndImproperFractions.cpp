#include <iostream>

long long properFractions(long long d) 
{
    int counter = 0;

    for (long n = 1; n < d; n++)
    {
        long i = 1;
        bool chk = false;

        do
        {
            i++;
            chk = false;
            if (n % i != 0 && d % i != 0)
            {
                counter++;
                chk = true;
            }
            
        }
        while (i == n || chk == true);
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