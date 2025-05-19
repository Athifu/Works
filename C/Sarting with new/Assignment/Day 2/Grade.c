#include <stdio.h>

int main(){
    float presentage ;

    printf(" Enter your total mark in percentag : ");
    scanf("%f",&presentage);

    if(presentage >= 90){
        printf("Your grade is : A");
    }else if(presentage >= 80){
        printf("Your grade is : B");
    }else if(presentage >= 70){
        printf("Your grade is : C");
    }else if(presentage >= 60){
        printf("Your grade is : D");
    }else if(presentage >= 50){
        printf("Your grade is : E");
    }else if(presentage <= 50){
        printf("Your grade Failed!!!");
    }

}