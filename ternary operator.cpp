#include <iostream>

int main(){
    /*
    ternary operator ?: = reaplacement to an if/else statement
    condition ? expression1: expression2;
    */

    int grade = 75;
    
    grade >=60 ? std::cout << "You pass! \n": std::cout << "You fail! \n";

    int number = -9;
    number % 2 == 0 ? std::cout << "Even Number. \n" : std::cout << "Odd number \n";

    bool hungry = true;

    // hungry ? std::cout << "You are hungry": std::cout << "You are full";
    std::cout << (hungry ? "You are hungry": "You are full");

    return 0;
}