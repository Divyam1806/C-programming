#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    double d;
    printf("Enter the coefficients a ,b & c of the quadratic equation. \n");
    scanf("%d %d %d",&a,&b,&c);
    d=(b*b)-(4.0*a*c);
    int fl;
    if(d==0)
        {
            fl=0;
        }
    else if(d>0)
        {
            fl=1;
        }
    else
        {
            fl=-1;
        }
    double r,r1,r2;
    switch(fl)
    {
        case 0:r=-b/2*a;
        printf("Equation has equal roots %lf\n",r);
        break;
        case 1:
        r1=(-b-sqrt(d))/2*a;
        r2=(-b+sqrt(d))/2*a;
        printf("Equation has two distinct roots %lf and %lf",r1,r2);
        break;
        default:printf("Equation has complex roots");
    }


    return 0;

}