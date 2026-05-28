#include<stdio.h>
int main()
{
    int s=0,n;
    printf("enter the number");
    scanf("%d",&n);
    for (int i=0;i<=n;i++)
    {
        s=s+i;
    }
    printf("the sum of the digits is %d",s);
    return 0;
}