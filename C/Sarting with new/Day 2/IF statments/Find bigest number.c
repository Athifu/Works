#include <stdio.h>

int main(){

    int num1;
    int num2 ;

    printf("Enter two  number : ");
    scanf("%d%d", &num1 ,&num2);

    if(num1 < num2){
        printf("Greatest number is  : %d", num2);
    }
    else{
        printf("Greatest number is : %d", num1);
    }
    return 0;
}