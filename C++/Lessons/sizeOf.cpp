#include <iostream>

// sizeof() = determine the size in bytes of a ;
//              variable , data type , objects, etc.
int main(){

    std::string name = "athifu" ;
    double gpa = 9.5 ;
    char grade = 'f';
    bool student = true ;
    char  grades[] = {'A', 'B', 'C', 'D' ,'E' ,'f'} ;
    std::string students[] = {"athifu" , "lolu" , "kavariki" "Gundu" "etccc" };

    std::cout << sizeof(students)/sizeof(std::string) << "elements\n" ;
    return 0 ;
}