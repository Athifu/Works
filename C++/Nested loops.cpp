#include <iostream>
// a loop is insise a loop as nested loop
int main(){


    for(int i =1 ; i <=3 ; i++){
        for (int j = 1 ; j <=10 ; j++){
            std::cout << j << ' ';
        }
        std::cout << '\n' ;
    }

    return 0 ;
}