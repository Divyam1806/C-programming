#include <stdio.h>
int main(){
int n,i,n1=0;
printf("Enter 5-digit number :");
scanf("%d",&n);
for(i=0;i<5,n>0;i++){
    int d=n%10;
    n1=(n1*10)+d;
    n=n/10;}
printf("Reverse :%d",n1);
}
