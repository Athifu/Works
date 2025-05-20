#include <stdio.h>

int main(){

    int choice , i , num;

    printf("Enter a number to make that number mutiplication table");
    scanf("%d",&choice);

    for(i = 1 ; i <= 10 ; i++){
        num = i * choice ;
        printf("%d X %d = %d\n" ,i , choice , num);

    }
}