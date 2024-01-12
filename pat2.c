#include <stdio.h>
int main()
{
    int i,j,k,l,n;
    printf("Enter no. of lines :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n-i+1;j>1;j--)
        {
            printf("  ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d ",k);
        }
        for(l=i-1;l>0;l--)
        {
            printf("%d ",l);
        }
        printf("\n");
    }
}