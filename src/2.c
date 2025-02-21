#include <stdio.h>

// By considering the terms in the Fibonacci sequence whose values do not exceed four million,
// find the sum of the even-valued terms.

int main()
{
    int sum = 0;
    int prev = 1;
    int curr = 1;

    while (curr < 4000000)
    {
        int tempPrev = curr;
        curr += prev;
        prev = tempPrev;
        if (curr % 2 == 0)
        {
            sum += curr;
        }
    }

    printf("%d", sum);
}