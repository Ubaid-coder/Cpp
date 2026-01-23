#include <iostream>

void swap(std::string &x, std::string &y);

int main()
{

    std::string x = "Kooll-Aid";
    std::string y = "Water";
    
    std::cout << "Address OF X: " << &x << "\n";
    std::cout << "Address Of Y: " << &y << "\n";
    swap(x,y);
    
    std::cout << "X: " << x << "\n";
    std::cout << "Y: " << y << "\n";


    return 0;
}


// x address 1.address = 0x5ffe50  6291024 10111111111111001010000
// reference x address same 2.address = 0x5ffe50X 6291024
// y address = 0x5ffe30 6290992 10111111111111000110000

 void swap(std::string &x, std::string &y)
{
    std::cout << "Address: " << &x << '\n';
    std::string temp;
    temp = x;
    x = y;
    y = temp;

}
    // Creating copy of x and y
 /* void swap(std::string x, std::string y)
{
    std::cout << "Address: " << &x << '\n';
    std::string temp;
    temp = x;
    x = y;
    y = temp;

}
*/