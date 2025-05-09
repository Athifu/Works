#include <iostream>

int main(){
    // switch + alternative to using many "else if" statments compare one value against matching cases

    int month ;

    std::cout << "Enter the month (1 - 12)";
    std::cin >> month ;

  /* if(month == 1){
        std::cout << "It is January" ;
    }
    else if(month  == 2){
        std::cout << "It is February" ;
    }
    else if(month = 3){
        std::cout << "It is March";
    }
    else if(month = 4){ 
        std::cout << "It is April";
    }
    else if(month = 5){
        std::cout << "It is May";
    }
    else if(month = 6){
        std::cout << "It is June";
    }
    else if(month = 7){
        std::cout << "It is july";
    }
    else if(month = 8){
        std::cout << "It is Aguest";
    }
    else if(month = 9){
        std::cout << "It is September";
    }
    else if(month = 10){
        std::cout << "It is October";
    }
    else if(month = 11){
        std::cout << "It is November";
    }
    else if(month = 12){
        std::cout << "It is December";
    }
    else {
        std::cout << "You are a Fooool !!!";
    }*/

    // using swithch we make that same thing

    switch (month)
    {
    case 1:
        std::cout << "It is January" ;
        break;
    case 2:
        std::cout << "It is Ferbuary" ;
        break;
    case 3:
        std::cout << "It is March" ;
        break;
    case 4:
        std::cout << "It is April" ;
        break; 
    case 5:            
        std::cout << "It is May" ;
        break;
    case 6:
        std::cout << "It is June" ;
        break;
    case 7:
        std::cout << "It is july" ;
        break;
    case 8:
        std::cout << "It is Aguest" ;
        break; 
     case 9:
        std::cout << "It is September" ;
        break;
    case 10:
        std::cout << "It is October" ;
        break;
    case 11:
        std::cout << "It is November" ;
        break;
    case 12:
        std::cout << "It is December" ;
        break; 
    default:
        std::cout << "Enter corecct option ";
        break;
    return 0 ;
}
