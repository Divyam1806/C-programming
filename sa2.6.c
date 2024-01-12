#include<stdio.h>
#include<stdlib.h>
int main(){
int p,r,ps;
printf("Enter paise :");
scanf("%d",&p);
r=p/100;
ps=p%100;
printf("Rupees :%d\n",r);
printf("Paise :%d\n",ps);
}
