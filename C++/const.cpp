#include <iostream>

int main(){
    // the const keyword specifies that a variable's value is constatnt
    //tella that compiler to prevent anything from modifying it
    //(read only)
    //when use of const keyword can't replace with other

    const double pi = 3.14159;
    double radius = 10;
    double circumference = 2 * pi * radius ;

    std::cout << circumference << "cm";

}