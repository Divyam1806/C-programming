#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int s=1;
        for(j=1;j<=(2*n)+1;j++)
        {
            if(j%2==0)
            {
                printf("%d ",s);
            }
            else
            {
                printf("  ");
            }
            s++;
        }
        printf("\n");
    }
}