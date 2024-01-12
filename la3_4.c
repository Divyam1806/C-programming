# include <stdio.h>
int main()
{
  char ch;
  printf("Enter an alphabet :");
  scanf("%c",&ch);
  printf("%c",ch);
  if (ch>='A' && ch<='Z')
  {
    ch=ch+32;
    printf("\nLowercase of entered alphabet : %c",ch);
  }  
  else
  {
    printf("\nEntered alphabet is in lowercase : %c",ch);
  }
}