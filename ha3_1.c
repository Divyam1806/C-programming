#include<stdio.h>
int main() {
char g;
printf("enter any character: ");
scanf("%c",&g);
if(((g>=65)&&(g<=90))|| ((g>=97)&&(g<=122))){
printf("Entered character is an alphabet");
}
else if((g>=48)&&(g<=57)){
printf("entered character is digit");
}
else{
printf("it is a special character");
}
return 0;
}