#include<stdio.h>
#include<stdlib.h>
int main(){
int a,b,temp;
printf("Enter two numbers :");
scanf("%d%d",&a, &b);
temp=a;
a=b;
b=temp;
printf("Values after swapping :%d\n",a);
printf("Values after swapping :%d\n",b);
}
