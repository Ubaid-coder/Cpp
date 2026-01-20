#include <iostream>

int main(){

    // int x = 3.14;
    // double x = 3.14;
    // double x = (int) 3.14;

    // char x = 100;

 
    // std::cout << x;

    //std::cout << (char) 100; // d

    int correct = 8;
    int question = 10;
    double score = correct/(double)question * 100;

    std::cout << score << "%";

    /*
    type conversion:
    conversion a value of one data type to another
    Implicit = automatic
    Explicit = Precede value with new data type 
    */

    return 0;
}