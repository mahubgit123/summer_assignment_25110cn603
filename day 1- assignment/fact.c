#include<stdio.h>
int main()
{
    int fact=1,n;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        fact= fact*i;
    }
    printf("the factorial is %d",fact);
    return 0;
}