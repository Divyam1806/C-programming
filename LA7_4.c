// LA7.4 Write a program to count the number of characters, alphabets, tabs, newlines, words, vowels,
// consonants present in a in a string.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    int i, vowels = 0, consonants = 0, no_of_char = 0, noOfTab=0, noOfNewline=0, noOfwords=0;

    printf("Enter a string\n");
    gets(str);
    no_of_char = strlen(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\t')
            noOfTab++;
        

        if (str[i] == '\n')
            noOfNewline++;

        if (str[i] == ' ')
            noOfwords++;

        if (isalpha(str[i]))
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            vowels++;
        
            else
            consonants++;
        }
       
    }
    printf("\nTotal characters = %d", no_of_char);
    printf("\nTotal alphabets = %d", vowels + consonants);
    printf("\nNumber of tabs = %d", noOfTab);
    printf("\nNumber of newline = %d", noOfNewline);
    printf("\nNumber of words = %d", noOfwords);
    printf("\nVowels = %d", vowels);
    printf("\nConsonants = %d", consonants);

    return 0;
}