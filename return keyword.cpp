#include <iostream>

double square(double length);
double cube(double length);
std::string concatString(std::string firstName, std::string lastName);

int main(){

    double length = 5.2;
    double area = square(length);
    double volume = cube(length);

    std::cout << "Area: "<< area<< "cm^2\n";
    std::cout << "Volume: "<< volume<< "cm^3\n";

    std::string firstName = "Muhammad";
    std::string lastName = "Ubaid";

    std::string username = concatString(firstName, lastName);
    std::cout << "Username is: " << username;

    return 0;
}

double square(double length){
    double result = length * length;
    return result;
}

double cube(double length){
    double result = length * length * length;
    return result;
}

std::string concatString(std::string firstName, std::string lastName){
    return firstName + " " + lastName;
}