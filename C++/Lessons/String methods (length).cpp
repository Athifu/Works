#include <iostream>

int main(){
        std::string name;
        
        std::cout << "Enter your name : ";
        std::getline(std::cin, name);

        if(name.length() > 12){
            std::cout << "Your name can can't be over 12 charactors";
        }
        else{
            std::cout << "Welcome " << name ;
        }
    return 0;
}