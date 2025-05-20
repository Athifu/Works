#include <stdio.h>

int main(){

    int i , j , limit ;

    printf("Enter a number to print pattern : ");
    scanf("%d", &limit );

    for(i = 0 ; i <= limit ; i++){
        for(j = 0 ; j <= i ; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0 ;
}