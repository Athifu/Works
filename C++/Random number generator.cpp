#include <iostream>
#include <ctime>

int main(){
    // pseudo-random = Not truly random (but close)

    srand(time(NULL)) ;

    int num1 ;
    int num2 ;
    int num3 ;

    num1 = (rand() % 6) + 1 ;
    num2 = (rand() % 6) + 1 ;
    num3 = (rand() % 6) + 1 ;

    std::cout << num1 << '\n' ;
    std::cout << num2 << '\n' ;
    std::cout << num3 << '\n' ;




    return 0 ;
}