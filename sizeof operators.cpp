#include <iostream>

int main(){

    /*
    size of determines the size in bytes of a:
    variables, data type, class , objects, etc.
    */

    double gpa = 4.5;
    std::string name = "Shiraz will be the first scientist in our friends";
    char grade = 'B';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    std::string students[] = {"Ali", "Maryam", "Muskan", "Ubaid"};

    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(grade) << " bytes\n";
    std::cout << sizeof(student) << " bytes\n";
    std::cout << sizeof(grades) << " bytes\n";
    std::cout << sizeof(students) << " bytes " << sizeof(students)/sizeof(std::string) << " elements \n";
    
    return 0;
}