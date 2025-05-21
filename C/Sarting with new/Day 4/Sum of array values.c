#include <stdio.h>

int main(){
    
    int array[100];
    int limit , i , sum ;

    printf("Enter array limit : ");
    scanf("%d", &limit);

    printf("Enter %d values to sum : ", limit);
    for( i = 0 ; i < limit ; i++){
        scanf("%d", &array[i]);
        sum = sum + array[i];
    }
    printf("Toltal sum : %d\n", sum);
     
    return 0 ;
}