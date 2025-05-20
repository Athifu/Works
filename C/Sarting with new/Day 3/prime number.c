#include <stdio.h>

int main(){
    int choice ;
    int i , flag = 0 ;

    printf("Enter a number : ");
    scanf("%d", &choice);

    for( i = 2 ; i < choice/2 ; i++){
        if(choice % i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("Prime number");
    }else{
        printf("Not a prime number");
    }
    return 0 ;
}