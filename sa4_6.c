#include <stdio.h>
int main()
{
    int n,i=1,c=0;
    printf("Enter a number :");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
        {
            c++;
        }
        i++;
    }
    if(c==2)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
}