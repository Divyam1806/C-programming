#include <stdio.h>
int main()
/*
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
*/
/*
{
    int i,j,k;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i-1;j++)
        {
            printf("  ");
        }
        for(k=1;k<=5-i+1;k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
}
*/
/*
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
*/
{
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    while(n>0)
    {
        printf("%d ",n);
        n--;
    }
}
