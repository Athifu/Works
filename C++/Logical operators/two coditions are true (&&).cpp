#include <iostream>

int main(){
    int temp ;
    
    std::cout << "Enter temprature : ";
    std::cin >> temp ;

    if(temp > 0 && temp < 30) {
        std::cout << " it is good temperture" ;
    }
    else {
        std::cout << "it is bad temperature";
    }

 //    std::cout << ( temp > 0 && temp < 30 ? "good" : "bad") ; // ternary use only small things(words)

    return 0 ;
}

// int main1(){
//     int pass1;
//     int pass2;

//     std::cout << "Enter the manager password : ";
//     std::cin >> pass1;

//     std::cout << "Enter the clint password : " ;
//     std::cin >> pass2;

//     if(pass1 == 1234 && pass2 == 5678){
//         std::cout << "Entry Granded" ;
//     }
//         else{ 
//             std::cout << "wrong password" ;

//     }
// }