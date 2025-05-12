#include <iostream>
#include <ctime>
int main(){

    int num;
    int tries = 0 ;
    int guess ;

    srand(time(NULL)) ;
    num = (rand() % 100 + 1 ) ;

    std::cout << "********* NUMBER GUESSING GAME ********** \n" ;

    do{
        std::cout << "Enter a guess between (1 - 100) : " ;
        std::cin >> guess ;
        tries++ ;

        if(guess > num) {
            std::cout << "TOO high!\n" ;
        }
        else if(guess < num){
            std::cout << "TOO Low\n";
        }
        else{
            std::cout << "CORRECT! Number of tries : " << tries << '\n' ;
        }

    }while( num != guess) ;
    std::cout << "******************************************";
    return 0 ;
}