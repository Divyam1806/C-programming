#include <stdio.h>
int main(){
int n,i,s=0;
printf("Enter 5-digit number :");
scanf("%d",&n);
for(i=0;i<5,n>0;i++){
    int d=n%10;
    s=s+d;
    n=n/10;
}
printf("Sum of digits :%d",s);
}
