#include <iostream>
#include <vector>
// typedef = reserved keyword use to creat an additinal name 
//           (alias) for another data type.
//            Now identifier for an existing type
//            Helps with readability and reduces typos
//            use when ther is a clear benifit
//            Replaced with "using" (work better w/ templates)




// typedef std::vector<std::pair<std::string, int >> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;
using text_t = std::string;
using number_t = int;

int main(){

    text_t firstName = "Athifu";
    number_t age = 16 ;

    std::cout << "first name "<< firstName << std::endl;
    std::cout << "age " << age << std::endl;









     return 0;


}
