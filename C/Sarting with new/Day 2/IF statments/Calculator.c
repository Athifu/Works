#include <stdio.h>

int main(){
    float num1 , num2 ;
    float add , sub ,div , mul ;
    int choice ;

    printf("Enter two number : ");
    scanf("%f%f", &num1 , &num2) ;

    printf(" 1 for addition\n 2 for subtraction\n 3 for maltiplication\n 4 for divition");
    scanf("%d", &choice);

    if(1 == choice){
        add = num1 + num2 ;
        printf("Result : %.2f", add);
    }


    


    return 0 ;
}