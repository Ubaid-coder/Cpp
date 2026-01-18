#include <iostream>

int main(){

    std::string name;
    
    std::cout << "Enter Your Name: ";
    std::getline(std::cin, name);

    // if(name.length() > 12){
    //     std::cout << "Your name can't be over 12 characters";
    // }else{
    //     std::cout << "Welcome " << name;
    // }

    // if(name.empty()){
    //     std::cout << "Name can't be empty!";
    // }else{
    //     std::cout << "Welcome " << name;
    // }

    // name.clear();
    // std::cout << "Hello" << name;

    // name.append("@gmail.com");
    // std::cout << "Your username is now " << name;

    // std::cout << name.at(0);
    // std::cout << name.length();
    // name.insert(1, "@");
    // std::cout << name;
    // std::cout << name.find(' ');
    name.erase(0, 3);
    std::cout << name;

    return 0;
}