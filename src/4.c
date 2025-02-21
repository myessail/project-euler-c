#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Find the largest palindrome made from the product of two 3-digit numbers.

bool isPalindrome(int x)
{
    char result[20];
    sprintf(result, "%d", x);

    int totalLen = strlen(result);
    for (int i = 0; i < totalLen / 2; i++)
    {
        if (result[i] != result[totalLen - i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int largest = 0;

    for (int num1 = 100; num1 < 1000; num1++)
    {
        for (int num2 = 100; num2 < 1000; num2++)
        {
            int result = num1 * num2;
            if (isPalindrome(result) && result > largest)
            {
                largest = result;
            }
        }
    }

    printf("the largest palindrome is %d", largest);
}