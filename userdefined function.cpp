#include <iostream>

void happyBirthday(std::string birthdayBody, int age);

int main()
{

    std::string name = "Ubaid";
    int age = 16;

    happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string birthdayBody, int age)
{
    std::cout << "Happy Birthday to you\n";
    std::cout << "Happy Birthday to you\n";
    std::cout << "Happy Birthday dear " << birthdayBody << '\n';
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Your age is now: " << age;
}
