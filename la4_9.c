/*#include <stdio.h>
#include <math.h>

int main() 
{
    int n1,rem,n = 0;
    double ans = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &n1);
    n=n1;
    while (n!=0) 
    {
        n/=10;
        ++n;
    }
    n=n1;
    while (n!= 0) 
    {
        rem=n%10;
        ans+= pow(rem, n);
        n/= 10;
    }
    if (ans == n1) 
    {
        printf("%d is an Armstrong number.\n", n1);
    } 
    else
    {
        printf("%d is not an Armstrong number.\n", n1);
    }
}
#include<stdio.h>
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    int m=n;
    int on = n;
    int p=0;
    int ans=0;
    // counting no of  digits in number
    while(m>0){
        m=m/10;
        p++;
    }
    while(n>0){
        int bit=n%10;
        int pow=1;
        for (int i=0;i<p;i++){
            pow=pow*bit;
        }
        ans=ans+pow;
        n=n/10;
    }
    if(ans==on){
        printf("%d is armstrong number",on);
    }
    else{
        printf("%d is not an armstrong number",on);
    }
}*/
