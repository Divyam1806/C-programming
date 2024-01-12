#include <stdio.h>

int main() 
{
    int a, b, i;
    printf("Enter the start of the range: ");
    scanf("%d", &a);
    printf("Enter the end of the range: ");
    scanf("%d", &b);
    printf("Odd numbers within the range: ");
    for(i = a; i <= b; i++)
    {
        if(i % 2 != 0) 
        {
            printf("%d ", i);
        }
    }
    printf("\nEven numbers within the range: ");
    for(i = a; i <= b; i++) 
    {
        if(i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
}