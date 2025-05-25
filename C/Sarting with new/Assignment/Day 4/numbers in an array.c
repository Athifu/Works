#include <stdio.h>

int main(){

    int i , limit , value[100] , even;

    printf("Enter the size of an array : ");
    scanf("%d", &limit);

    printf(" Enter %d values of array : ", limit);
    for(i = 0 ; i < limit ; i++){
        scanf("%d", &value[i]);
    }

    for(i = 0 ; i < limit ; i++){
        if( value[i] % 2 == 0){
            even = even + 1 ;
        }
    }
    printf(" Number of even numbers in the given array is : %d", even);

    return 0 ;
}