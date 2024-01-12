#include<stdio.h>
int main(){
int a,b;
printf("Enter 1st number :");
scanf("%d",&a);
printf("Enter 2nd number :");
scanf("%d",&b);
printf("Before swap a=%d b=%d",a,b);
//(a^=b),(b^=a),(a^=b);
(a=a+b), (b=a-b), (a=a-b);
printf("\nAfter swap a=%d b=%d",a,b);
}
