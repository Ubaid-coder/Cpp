#include <iostream>

void printInfo(const std::string &name, const int &age);

int main()
{

    std::string name = "Ubaid";
    int age = 16;

    printInfo(name, age);

    return 0;
}

void printInfo(const std::string &name, const int &age)
{
    
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
}