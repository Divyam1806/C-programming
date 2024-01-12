#include<stdio.h>
int main()
{
    int n,a=3,b=2;
    printf("enter upto how many term: ");
    scanf("%d",&n);
    printf("%d ",a);
    while(b!=n)
    {
        if(b%2==0)
        {
            printf("%d ",(3*b)-1);
        }
        else
        {
            printf("%d ",(3*b)-2);
        }
        b++;
    }
}