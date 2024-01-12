#include<stdio.h>
int main()
{
    int n,i=1,s=0;
    printf("Enter max. limit :");
    scanf("%d",&n);
    while(i<=n)
    {
     s=s+i;
     i++;
    }
    printf("Sum of series is %d",s);
}