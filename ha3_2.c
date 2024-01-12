#include <stdio.h>
int main()
{
    int a,b,ch;
    printf("1 for add\n2 for subtract\n3 for multiplication\n4 for division\n5 for remainder\n");
    printf("Enter choice :");
    scanf("%d",&ch);
    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case 1:
        printf("Sum : %d",a+b);
        break;
        case 2:
        printf("Difference : %d",a-b);
        break;
        case 3:
        printf("Product : %d",a*b);
        break;
        case 4:
        printf("Quotient : %d",a/b);
        break;
        case 5:
        printf("Remainder : %d",a%b);
        break;
        default:
        printf("Invalid choice...");
    }
}