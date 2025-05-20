#include <stdio.h>

int main(){
    int i , limit ;

    printf("Enter a number : ");
    scanf("%d", &limit );

    for(i = 2 ; i <= limit ; i++){
        if( i%2 == 0){
            printf("%d\n", i);
        }
    }
}