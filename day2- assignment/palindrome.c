#include <stdio.h>
int main()
{
    int d,n,rev=0;
    printf("enter a number");
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(rev==temp)
    {
        printf("the number is a palindrome number");
    }
    else
    {
        printf("the number is not a palindrome number");
    }
    return 0;
}
    