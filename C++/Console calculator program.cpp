#include <iostream>
#include <cmath>

int main(){

     char choice ;
     double num1 ;
     double num2 ;
     double result ;

     std::cout << "********** CALCULATER **********" << std::endl ;

     std::cout << "Enter either ( + - * /) : \n";
     std::cin >> choice ;

     std::cout << "Enter #1 : \n";
     std::cin >> num1;

     std::cout << "Enter #2 : \n";
     std::cin >>  num2 ;

     switch(choice){

        case '+':
            result = num1 + num2 ;
            std::cout << "Result" << result << '\n' ;
            break;
        case '-' :
            result = num1 - num2 ;
            std::cout << "Result" << result << '\n' ;
            break;
        case '*' :
            result = num1 + num2 ;
            std::cout << "Result" << result << '\n' ;
            break;
        case '/' :
            result = num1 / num2 ;
            std::cout << "Result" << result << '\n' ;
            break;
        default :
            std::cout << "enter correct input \n"   ;
            break;
     }
     std::cout << "********************************" ;

    return 0;
}