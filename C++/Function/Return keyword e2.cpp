#include <iostream> 
std::string concatString(std::string firstname, std::string lastname);
int main(){

    std::string firstName = "Bro" ;
    std::string lastName = "Code" ;
    std::string fullName = concatString(firstName , lastName) ;

    std::cout << "Hello" << fullName ;

}

    std::string concatString(std::string firstname, std::string lastname){
        std::string result ;
        result = firstname + " " + lastname ;

        return result ;
    }

