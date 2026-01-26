#include <iostream>

struct student
{
    std::string name;
    double gpa;
    bool enrolled = true;
};

int main()
{

    student student1;
    student1.name = "Harry";
    student1.gpa = 3.2;
    student1.enrolled = true;

    student student2;
    student2.name = "Ubaid";
    student2.gpa = 3.5;
    student2.enrolled = false;

    student student3;
    student3.name = "Rahim";
    student3.gpa = 2.5;
    
    std::cout << "******************\n";
    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';
    std::cout << "******************\n";

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';
    std::cout << "******************\n";

    std::cout << student3.name << '\n';
    std::cout << student3.gpa << '\n';
    std::cout << student3.enrolled << '\n';

    return 0;
}