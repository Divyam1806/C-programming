#include <stdio.h>
#include <math.h>
int main()
{
    int n,s=0,y;
    printf("Enter a number :");
    scanf("%d",&n);
    y=n;
    for(int i=n;i>0;i/=10)
    {
        
        s+=pow(i%10,3);
        printf("s=%d\n",s);
    }
    printf("%d\n",s);
    if(s==y)
    {
        printf("%d is Armstrong",y);
    }
    else
    {
        printf("%d is not Armstrong",y);
    }
}