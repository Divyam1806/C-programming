/*#include <stdio.h>
int main()
{
  long dn, r, q,ocn=0;
  int on[100], i = 1, j;
  printf("Enter the decimal number: ");
  scanf("%ld", &dn);
  q = dn;
  while (q!=0)
  {
    on[i++]=q%8;
    q=q/8;
  }
  for (j = i - 1; j > 0; j--)
  {
    ocn = ocn*10 + on[j];
  }
  printf("Equivalent octal value of decimal no %d is: %d  ", dn,ocn);
}*/
/*
// Online C compiler to run C program online
#include <stdio.h>

int main() {
int i,j,k,l;
int n=4;
for(i=n;i>=1;i--){
    for(j=n-i;j>0;j--){
        printf("  ");
    }
    for(k=1;k<=i;k++){
        printf("%d ",k);
    }
    for(l=i-1;l>=1;l--){
      printf("%d ",l);
    }
    printf("\n");
}

    return 0;
}
*/

/*#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate the binomial coefficient
int binomialCoeff(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Function to print Pascal's triangle
void printPascalTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", binomialCoeff(i, j));
        }
        printf("\n");
    }
}

// Main function
int main() {
    int rows;

    printf("Enter the number of rows for Pascal's triangle: ");
    scanf("%d", &rows);

    printf("Pascal's Triangle:\n");
    printPascalTriangle(rows);

    return 0;
}
*/

/*#include<stdio.h>
int newterm(int i,int j);
int fact(int n);
int main(){
int i,j,space,c;
int r=6;
for (i=0;i<r;i++){
        for(space=0;space<(r-i);space++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            if((j==0)||(i==j)){
                printf("%d ",1);
            }
            else{
                c=newterm(i,j);
                printf("%d ",c);
            }


        }
        printf("\n");
}
}

int fact(int n){
int sum=1,i;
for(i=1;i<=n;i++){
        sum=sum*i;
}
return sum;
}

int newterm(int i,int j){
    int tr,a,b,c;
    a=fact(i);
    b=fact(j);
    c=fact(i-j);
    tr=a/(b*c);
    return  tr;
}*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[30];
    printf("Enter the array you want to reverse.\n");
    gets(str);
    printf("\n");

    puts(strrev(str));
    printf("\n");

    puts(strrev(str));

    return 0;
}