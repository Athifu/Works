#include <stdio.h>

int main(){

    float num1 ,num2 , num3 ;
    float average ;

    printf("Enter 3 number to find average : ");
    scanf("%f%f%f" , &num1,&num2 ,&num3);

    average = (num1 + num2 + num3)/3 ;

    printf("Result : %f" , average);
}