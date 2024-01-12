#include <stdio.h>
int main(){
int s,hra,da,ts;
printf("Enter basic salary :");
scanf("%d",&s);
hra =(0.2*s);
da = (0.4*s);
ts= s+da+hra;
printf("Gross salary :%d\n",ts);
}
