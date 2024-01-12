//WAP to enter a string using pointers
#include<stdio.h>
int main()
{
    char *ptr;
    char str[100];
    char arr[100];
    printf("Enter string: ");
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        ptr=&str[i];
        arr[i]=*ptr;
    }
    printf("The string is:");
    puts(arr);
}