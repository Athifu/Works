#include <iostream> 

int main(){
    int rows ;
    int columns ;
    char symbol ;

    std::cout << "Hwo many rows ? : " ;
    std::cin >> rows ;

    std::cout << "Hwo many columns? : ";
    std::cin >> columns ;

    std::cout << "Enter the symbol to use? : " ;
    std::cin >> symbol ;

    for (int i = 1; i <= rows ; i++)
    {
        for(int j = 1 ; j <= columns ; j++){
            std::cout << symbol ;
        }
        std::cout << '\n' ;
    }    
    return 0;
}