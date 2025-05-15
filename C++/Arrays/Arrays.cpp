#include <iostream>
// array = a dsts dtructure thst csn ho;d multiple values
//          values are accessed by an index number
//          "kind of like a varible that holds multiple values"
int main(){
    //std::string cars[] = {"corette" , "mustang" , "camry"} ;

     std::string cars[3];

    cars[0] =  "camaro";
    cars[1] = "Mustang";
    cars[2] = "camry" ;

    std::cout << cars[0] << '\n' ;
    std::cout << cars[1] << '\n' ;
    std::cout << cars[2] << '\n' ;
 

}