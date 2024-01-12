#include <stdio.h>
int main(){
int n,d1,d4,s;
printf("Enter 4-digit number :");
scanf("%d",&n);
d1=n%10;
d4=n/1000;
s=d1+d4;
printf("Sum of 1st and 4th digit :%d",s);
}
