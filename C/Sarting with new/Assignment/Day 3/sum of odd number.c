#include <stdio.h>

int main(){

    int limit , i , sum;

    printf("Enter any number : ");
    scanf("%d", &limit);

    for( i =1 ; i <= limit ; i++){
        if(i % 2 == 1){
            sum = sum + i ;
        }
    }
    printf(" Sum of add number : %d\n", sum);


    return 0 ;
}