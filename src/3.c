#include <stdio.h>

// What is the largest prime factor of the number 600851475143?

int main()
{
    long numberToFactor = 600851475143;
    long intermediate = numberToFactor;
    long largest = 2;

    long i = 2;
    while (i <= intermediate)
    {
        if (intermediate % i == 0)
        {
            largest = i;
            intermediate /= i;
        }
        else
        {
            i++;
        }
    }

    printf("%ld", largest);
}