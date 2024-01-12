//WAP to compute sum of all elements in an array using pointers
#include <stdio.h>
int main()
{
    int arr[100];
    int *ptr;
    int n,sum=0;
    printf("Enter how many elements: ");
    scanf("%d",&n);
    printf("Enter %d elements in array:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        ptr=&arr[j];
        sum=sum+*ptr;
    }
    printf("The sum is %d",sum);
}