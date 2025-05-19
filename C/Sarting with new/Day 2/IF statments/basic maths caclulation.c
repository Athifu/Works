#include <stdio.h>

int main(){
    float num1 , num2 ;
    float result;
    int choice ;

    printf("Enter two number : ");
    scanf("%f%f", &num1 , &num2) ;

    printf(" 1 for addition\n 2 for subtraction\n 3 for maltiplication\n 4 for divition\n Enter your choice : ");
    scanf("%d", &choice);

    if(1 == choice){
        result = num1 + num2 ;
        printf("Result : %.2f", result);
    }else if(2 == choice){
        result = num1 - num2 ;
        printf("Result : %.2f", result);

    }else if(3 == choice){
        result = num1 * num2 ;
         printf("Result : %.2f", result);

    }else if(4 == choice){
        result = num1 / num2;
        printf("Result : %.2f", result);

    }else{
        printf("you are a fooolllll!!!");
    }


    


    return 0 ;
}