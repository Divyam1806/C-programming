#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,s;
    printf("Enter n :");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        s=pow(2,i)-1;
        printf("%d ",s);
        i++;
    }
}