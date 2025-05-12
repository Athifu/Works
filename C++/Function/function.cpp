#include <iostream>

 void happyBirthday (std::string name , int age);
int main(){
     
    // funtion = a block of reseable code

    std::string name = "Athifu" ;
    int age = 16  ;

    happyBirthday(name , age);

    return 0 ;
}

void happyBirthday(std::string name, int age){
    std::cout << "Happy Birthday to "<< name << '\n' ;
    std::cout << "Happy Birthday to "<< name << '\n' ;
    std::cout << "Happy Birthday to "<< name << '\n' ;
    std::cout << "Happy Birthday to "<< name << '\n' ;
    std::cout << "Your age "<< age << " yeare old" << '\n' ;
}