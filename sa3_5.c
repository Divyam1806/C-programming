#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d;
    float r1,r2,r;
    printf("Given quadratic equation ax^2 + bx + c = 0");
    printf("Enter value of a,b,c :");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        r1= (-b + sqrt(d))/(2*a);
        r2=(-b - sqrt(d))/(2*a);
        printf("Roots of the equation are %f and %f",r1,r2);
    }
    if(d=0)
     {
        r= -b/2*a;
        printf("Roots of the equation are %f and %f",r,r);
    }
    else
    {
        printf("Imaginary roots");
    }
}