// palindrome of a string
// LA7.3 WAP to check whether a string entered through keyboard is palindrome or not. 

#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[100];  
    int i,n,flag;
 
    printf("Enter  the string : ");
    gets(s);
    n=strlen(s);

    for(i=0;i<n/2;i++)  
    {
    	if(s[i]!=s[n-i-1])
        {flag=1;
        break;}
    	

 	}
 	if(flag==1)
 	    printf("string is not palindrome");
    else
        printf("string is palindrome");

 	 
     
    return 0;
}