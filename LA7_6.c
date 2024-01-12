// LA7.6 WAP to replace all occurrences of a character in a string with the previous 3rd character if any 
// of the character. 
#include<stdio.h>

int main(){
    char str[100],c;
    int i,j;
    printf("Enter input string ");
    scanf("%s",str);

    printf("Replace what ");
    gets(c);
    
    for ( i = 0; str[i]!='\0'; i++)
    {
        if (str[i]==c)
        {
            j=i;
            str[i]=str[i-3];
        }
        
    }
    printf("\nAfter the replacement string is %s", str); 


    return 0;
}