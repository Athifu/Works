#include <iostream>

    // Namespace = provide a solution for preventing name conflicts
    //             in large projects. Each entity needs auniqe name.
    //             A namespace allows for identically named entities
    //             as long as the namespace are diffrent.
    namespace first {
        int x = 1;
    }
    namespace second {
        int x = 2;
    }

int main(){
    using namespace second;

    int x = 0;
    
    std::cout << first::x ;

    return 0;
}