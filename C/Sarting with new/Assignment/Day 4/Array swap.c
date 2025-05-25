#include <stdio.h>

int main(){
    int array1[100] , array2[100] , i , limit , temp; 
    //collecting in put
    printf("Enter the size of Array : ");
    scanf("%d", &limit);

    printf("Enter %d values of Array 1 : ", limit);
    for(i = 0 ; i < limit ; i++){
        scanf("%d", &array1[i]);
    }

    printf("Enter %d values of Array 2 : ", limit);
    for(i = 0 ; i < limit ; i++){
        scanf("%d", &array2[i]);
    }
    //swaping
    for( i = 0 ; i < limit ; i++){
        temp = array1[i] ;
        array1[i] = array2[i] ;
        array2[i] = temp ;
    }
    //Display after swaping

    printf("Arrays after swapping:\n");

    printf("Array 1 : ");
    for(i = 0 ; i < limit ; i++){
        printf("%d\t", array1[i]);
    }
    
    printf("Array 2 : ");
    for(i = 0 ; i  < limit ; i++){
        printf("%d\t" , array2[i]);
    }





}