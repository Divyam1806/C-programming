//WAP to enter a string using pointers and count number of vowels 
#include <stdio.h>
int main()
{
    char str[100];
    char * ptr;
    int v=0;
    printf("Enter string: ");
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        ptr=&str[i];
        if((*ptr=='a')||(*ptr=='e')||(*ptr=='i')||(*ptr=='o')||(*ptr=='u')||(*ptr=='A')||(*ptr=='E')||(*ptr=='I')||(*ptr=='O')||(*ptr=='U'))
        {
        v++;
        }
    }
    printf("Total number of vowels is %d",v);
}