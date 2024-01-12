# include <stdio.h>
int main()
{
  char ch;
  printf("Enter an alphabet :");
  scanf("%c",&ch);
  printf("%c",ch);
  if (ch>='a' && ch<='z')
  {
    ch=ch-32;
    printf("\nUppercase of entered alphabet : %c",ch);
  }  
  else
  {
    printf("\nEntered alphabet is in uppercase : %c",ch);
  }
}