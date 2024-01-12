#include<stdio.h>
int main() {
float g,s;
printf("Enter temperature in Fahrenheit: ");
scanf("%f",&g);
s=(g-32)*5/9;
printf("\n %f Fahrenheit is equivalent to %f Celsius",g,s);
return 0;
}
