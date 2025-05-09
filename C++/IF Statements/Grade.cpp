#include <iostream>

int main(){
    
    char grade;

    std::cout << "What letter Grade? : ";
    std::cin >> grade ;

    switch(grade){
    case 'A':
        std::cout << "You did great";
        break;
     case 'B':
        std::cout << "You did Good";
        break;
    case 'c':
        std::cout << "you did okay";
        break;
    case 'D':
        std::cout << "you did not do good";
        break;
    case 'F':
        std::cout << "YOU FAILED!" ;
        break;
    default:
        std::cout << "Please olny enter in aletter grade ( A - F )";
    }
    return 0 ;
}