#include<stdio.h>
#include<math.h>
int fact(int n);
int main()
{
    int n;
    int p=-2;
    float x;
    float s=0;
    float t,y;
    printf("enter  value of x: ");
    scanf("%f",&x);
    printf("enter number of terms: ");
    scanf("%d",&n);
    y=x*3.14/180;
    for(int i=1;i<=n;i++)
    {
        p=p+2;
        float pp=pow(y,p);
        float xx=fact(p);
        t=pp/xx;
        if (i%2==0)
        {
            s=s-t;
        }
        else
        {
            s=s+t;
        }
    }
    printf("value of cosine series is %f",s);
    return 0;
}
int fact(int n)
{
    int i;
    int f=1;
    if (n==0)
    {
        return 1;
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
        return f;
    }
}