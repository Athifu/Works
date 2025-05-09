#include <iostream>
            //cout << (insertion operation) 
            // cin >> (extraction operation)
int main(){

    std::string name;
    int age ;

    std::cout << "What's your age : ";
    std::cin >> age ;

    std::cout << " What's your name?: ";
    std::getline(std::cin >> std::ws, name); // create space in strings {when we type our fulll name}

    

    std::cout << "Hello " << name << std::endl ;
    std::cout << "your age : " << age  << " years old";

    return 0 ;
}