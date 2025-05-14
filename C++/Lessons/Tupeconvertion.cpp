#include <iostream>

int main(){

    //type convertion = convertion a value of one data type to another
                        //implicit = atomatic
                        //Explict = preced value with new data type (int)
            int correct = 8;
            int question = 10 ;
            double score = correct/(double)question * 100 ;// here use (double) use as type converter that the question divided by crrect . change int value to double value 

            std::cout << score << "%";

    return 0;
}