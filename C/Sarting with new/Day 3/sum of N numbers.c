#include <stdio.h>

int main(){

    int sum = 0 , i , limit;

    printf("Enter a number : ");
    scanf("%d", &limit);

    for(i = 0 ; i < limit ; i++){
        sum = sum + i ;
    }

    printf("total sum : %d", sum);

    return 0 ;
}