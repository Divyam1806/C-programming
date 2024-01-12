#include<stdio.h>
int main() {
int gp,h,m,s;
printf("Enter the given second to convert it into hour minutes and second: ");
scanf("%d",&gp);
h=gp/3600;
m=(gp-(3600*h))/60;
s=(gp -(3600*h)-(m*60));
printf("%d hour %d minutes %d seconds",h,m,s);
return 0;
}
