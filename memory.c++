
#include <iostream>

int main()
{

    /*
    memory address = a location in memory where data is stored
    a memory address can accessed with "&" (address-of operator)
    */

    std::string name = "MuhammadUbaid";
    int age = 16;
    bool student = true;

    std::cout << "Name Variable Address: " << &name << '\n'; // hexadecimal 
    std::cout << "Age Variable Address: " << &age << '\n'; // hexadecimal 
    std::cout << "Student Variable Address: " << &student << '\n'; // hexadecimal 

    return 0;
}