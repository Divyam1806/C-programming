#include <stdio.h>
int main()
{
    int a,b,i,r;
    printf("Enter range :");
    scanf("(%d,%d)",&a,&b);
    r=b-a;
    i=0;
    while(i<r)
    {
        printf("%d,",a);
        a++;
        i++;
    }
}