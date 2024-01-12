#include<stdio.h>
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {
        if(i%2==0)
        {
            int j=i;
            while(j>=1)
            {
                printf("%d ",j);
                j--;
            }
        }
        else
        {
            int j=1;
            while(j<=i)
            {
                printf("%d ",j);
                j++;
            }
        }
        printf("\n");
        i++;
    }
}