#include <iostream>

int main(){

    double temp ;
    char option ;

    std::cout << "******* Temperature convertion ********\n";

    std::cout << "F = fahrenheit\n";
    std::cout << "C = celsius\n" ;
    std::cout << "what unit would you like to convert to : ";
    std::cin >> option ;

    if(option == 'F' || option == 'f'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp ;

        temp = (1.8 * temp) + 32.0 ;
        std::cout << "Temperature is: " << temp << "F\n" ;
    }
    else if(option == 'C' || option == 'c' ){

        std::cout << "Enter the temperture in fahrenheit : " ;
        std::cin >> temp ;

        temp = (temp -32) / 1.8 ;
        std::cout << "temperature is : " << temp << "C\n" ;
    }
    else {
        std::cout << "please enter in C or F" ;
    }
    std::cout << "***************************************";

        return 0 ;
}