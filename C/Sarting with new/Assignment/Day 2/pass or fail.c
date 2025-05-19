#include <stdio.h>

int main(){

    float mark ;

    printf("Enter the exam Mark : ");
    scanf ("%f", &mark);

    if(mark <= 50){
        printf("Your are failed!!!");
    }
    else{
        printf("Your are passed!!!");
    }
    return 0 ;
}