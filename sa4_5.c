#include <stdio.h>
int main()
{
    int a,b,i,m;
    i=1;
    printf("Enter two numbers :");
    scanf("%d,%d",&a,&b);
    if(a>b)
    {
        m=a;
    }
    else
    {
        m=b;
    }
    printf("The HCF of %d and %d are...",a,b);
    while(i<m)
    {
        if(a%i==0 && b%i==0)
        {
            printf("%d ",i);
        }
        i++;
    }
}