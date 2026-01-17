#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)
int main()
{

    std::string name;
    int age;

    std::cout << "What's Your Age: ";
    std::cin >> age;

    std::cout << "What's Your Name: ";
    // std::cin >> name;
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}
