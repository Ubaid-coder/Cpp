#include <iostream>

int main()
{

    /*
    pointers = variable that stores a memory address of another
            variable sometimes it's easier to work with an address

    & address-of operator
    * dereference operator
    */

    std::string name = "Bro";
    int age = 16;
    std::string freePizza[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    std::string *pname = &name;
    int *page = &age;
    std::string *pfreePizza = freePizza;

    // std::cout << pname << '\n';
    std::cout << *pname << '\n';
    std::cout << *page << '\n';
    std::cout << pfreePizza << '\n';
    std::cout << *pfreePizza << '\n';
    
    return 0;
}