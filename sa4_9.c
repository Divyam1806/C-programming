#include <stdio.h>
int main()
{
    int x,n,i,y=1;
    printf("Enter value of X and n :");
    scanf("%d%d",&x,&n);
    for (i=1;i<=n;i++)
    {
        y=y*x;
    }
    printf("%d raised to the power %d equals %d",x,n,y);
}