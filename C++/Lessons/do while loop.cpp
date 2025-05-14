#include <iostream>

int main(){
    int number ;
    do{
        std::cout << "Enter a positive #; " ;
        std::cin >> number ;
    }while (number < 0 );

    // while(number < 0) {
    //     std::cout << "Enter a positive #: " ;
    //     std::cin >> number ;
    // }    

    std::cout << "This number is " << number ;

}