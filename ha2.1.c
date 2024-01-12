#include<stdio.h>
int main(){
int s1,s2,s3,s4,s5;
float avg;
printf("Enter marks of 5 subjects :");
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
avg=(s1+s2+s3+s4+s5)/5;
float per=avg;
printf("Average :%f Percentage :%f",avg,per);
}
