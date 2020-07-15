#include <stdio.h>

int sumOfDigits(int n);

int main() 
{
    int n;
    scanf("%d", &n);

    printf("%d\n", sumOfDigits(n));

    return 0;
}

int sumOfDigits(int n)
{
    int sum = 0;
    while (n != 0)
    {
        int r = n % 10;
        sum = sum + r;
        n = n / 10;
    }

    return sum;
}