// to extract last character of each word of given string

#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    int l, i;
    printf("\nEnter a string : ");
    gets(s);
    l=strlen(s);
    for(i=0; i<l+1; i++){
        if (s[i]==' '||s[i]=='\0')
        printf("%c ",s[i-1]); 
    }
    return 0;

}