#include <stdio.h>

int main(){

    int P ;//principle Amount
    float R ;//Intrest rate
    float n ;//number of year
    float SI ; //Simple intrest
    
    printf("******************************\n");
    printf("Welcome Simple interst program\n");
    printf("******************************\n");

    printf("Enter principal amount (P) : ") ;
    scanf("%d", &P) ;

    printf("Enter Intrest Rate (R) : ");
    scanf("%f", &R) ;

    printf("Enter NUmber of year (n) : ") ;
    scanf("%f",&n);

     SI=((P*R*n)/100) ;
    printf("Enter simple Intrest(SI) %.3f", SI);




    return 0 ;
}