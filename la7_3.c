#include <stdio.h>

#include <string.h>

int main()

{

   char s[100];
   char a[100];

   printf("Enter a string to reverse\n");

   gets(s);
   if((strcmp(strrev(s),s))==0)
   printf("Palindrome");
   else
   printf("Not");
   return 0;

}