#include <iostream>

int main(){
        std::string name;
        
        std::cout << "Enter your name : ";
        std::getline(std::cin, name);
        // we can use the .clear methode to clera the out put
        //name.clear();

        if(name.empty() > 12){
            std::cout << "You didn't enter your name ";
        }
        else{
            std::cout << "Hello " << name ;
        }
    return 0;
}