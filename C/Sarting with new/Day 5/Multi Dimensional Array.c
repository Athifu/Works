#include <stdio.h>

int main(){
    
    int i , j , values[3][3] ;

    printf("enter Values : ");

    for(i = 0 ; i < 3 ; i++){
        for(j = 0 ; j < 3 ; j++){
            scanf("%d", &values[i][j]);
        }
    }

    printf("Enterd Number are : ");

    for( i = 0 ; i < 3 ; i++){
        for( j = 0 ; j  < 3 ; j++){
            printf ("%d\t", values[i][j]);
        }
    }
}