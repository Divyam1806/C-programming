#include <stdio.h>
int main(){
float d,m,in,f,cm;
printf("Enter distance in km :");
scanf("%f",&d);
m=d*1000;
in=d*3937;
cm=d*100000;
f=d*3280.84;
printf("Distance in metres :%f\n",m);
printf("Distance in foot :%f\n",f);
printf("Distance in inches :%f\n",in);
printf("Distance in centimetres :%f",cm);
}
