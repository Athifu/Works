#include <stdio.h>
#include <stdlib.h>
int main(){
     int a , b , temp ;

    a = 10;
    b = 20;

    temp = a ;
    a = b ;
    temp = b ;

    printf("a : %d b : %d\n" , a ,b);

}