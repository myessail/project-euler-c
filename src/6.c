#include <stdio.h>
#include <math.h>

// Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

long sumOfSquares(int x)
{
    long sum = 0;
    for (int i = 1; i <= x; i++)
    {
        sum += pow(i, 2);
    }
    return sum;
}

long squareOfSum(int x)
{
    long sum = 0;
    for (int i = 1; i <= x; i++)
    {
        sum += i;
    }
    return pow(sum, 2);
}

int main()
{
    long sumSquares = sumOfSquares(100);
    long squareSum = squareOfSum(100);

    printf("%ld", squareSum - sumSquares);
}