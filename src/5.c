#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

bool divisibleByAll(int x)
{
    for (int i = 1; i <= 20; i++)
    {
        if (x % i != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    for (int i = 1; i < INT_MAX; i++)
    {
        if (divisibleByAll(i))
        {
            printf("%d", i);
            break;
        }
    }
}