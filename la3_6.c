#include <stdio.h>
int main(){
    int a;
    printf("Enter marks out of 100 :");
    scanf("%d",&a);
    if (a>=90 && a<100){
    printf("O grade...");
    }
    else if(a>=80 && a<90){
    printf("E grade...");
    }
    else if(a>=70 && a<80){
    printf("A grade...");
    }
    else if(a>=60 && a<70){
    printf("B grade...");
    }
    else if(a>=50 && a<60){
    printf("C grade...");
    }
    else if(a>=40 && a<50){
    printf("D grade...");
    }
    else{
    printf("Fail...");
    }
}