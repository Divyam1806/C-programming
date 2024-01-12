#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of lines :");
    scanf("%d",&n);
    char A = 'A';
    int i=1;
    while(i<=n)
    {
        int j=i;
        while(j>=1)
        {
            printf("%c ",A+j-1);
            j--;
        }
        printf("\n");
        i++;
    }
}