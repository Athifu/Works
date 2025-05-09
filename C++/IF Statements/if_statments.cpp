#include <iostream>

int main(){
    // if Statment = do somthing a condition is true if not, then .that dont'n do it

     int age;

     std::cout << "Enter your age: " ;
     std::cin >> age ;

     if (age >= 100){
        std::cout  << "you are too old to enter this site" << std::endl ;
     }
      else if(age >= 18){
        std::cout << "Welcome to the site!" << std::endl; 

     }
     else if(age < 0){
        std::cout << "You have't been born yet! " << std::endl;
     }
     
     else {
        std::cout << "you are not old enough to enter !!" << std::endl ;

     }

    return 0;
}