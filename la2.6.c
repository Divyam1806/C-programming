#include<stdio.h>
#include<stdlib.h>
int main(){
int mg,km,m;
printf("Enter metres :");
scanf("%d",&mg);
km=mg/1000;
m=mg%1000;
printf("Kilometres :%d\n",km);
printf("Metres :%d\n",m);
}
