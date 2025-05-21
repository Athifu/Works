#include <stdio.h>

int main(){

    int array[100];
    int i , limit ;

    printf("Enter array limit : ");
    scanf("%d" , &limit);

    printf("Enter any %d values : " , limit);
    for( i = 0 ; i < limit ; i++){
        scanf("%d", &array[i]);
    }
    printf("Enter values are ");
    for ( i = 0; i < limit ; i++)
    {
        printf("  %d  " , array[i]);
    }
    
    
    return 0;
}