#include <stdio.h>

int main(){

    int num ;

    printf("Enter a number : ");
    scanf("%d", &num);

    if(num < 0){
        printf("NUmber is Negative");
    }else{
        printf("Number is positive");
    }
    return 0 ;
}
