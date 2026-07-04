#include <stdio.h>
#include <math.h>

int reverse(int n)
{
    if(n < 10)
    {
        return n;
    }

    int digits = (int)log10(n);
    return (n % 10) * pow(10, digits) + reverse(n / 10);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Reversed number = %d", reverse(n));

    return 0;
}