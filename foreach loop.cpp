#include <iostream>

int main(){

    std::string students[] = {"Shiraz", "Shaheer", "Rohan", "Ashar"};

    for(std::string student : students){
        std::cout << student << "\n";
    }

    int grades[] = {60, 70, 80, 90};

    for(int grade: grades){
        std::cout << grade << "\n";
    }
    
    return 0;
}