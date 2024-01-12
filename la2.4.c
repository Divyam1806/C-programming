#include<stdio.h>
#include<math.h>
int main(){
int a,b,c,s;
float area;
printf("Enter 3 sides : ");
scanf("%d%d%d",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt((s-a)*(s-b)*(s-c)*s);
printf("Area of triangle :%f\n",area);
}
