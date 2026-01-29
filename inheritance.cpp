#include <iostream>

class Animal{
    public:
        bool alive = true;
    void eat(){
        std::cout << "This animal is eating\n";
    }
};

class Dog: public Animal{
    public:

    void bark(){
        std::cout << "The dog goes woof!\n";
    }
};

class Cat: public Dog{
    public:
    void meow(){
        std::cout << "The cat goes meow!\n";
    }
};

class Shape{
    public:
        double area;
        double volume;
};

class Cube : public Shape{
    public:
        double side;
    Cube(double side){
        this->side = side;
        this->area = side * side * 6;
        this->volume = side*side*side;
    }
};

class Sphere : public Shape{
    public:
        double radius;
    Sphere(double radius){
        this->radius = radius;
        this->area = 4*3.142* (radius*radius);
        this->volume = (4/3.0)*3.142*radius*radius*radius;
    }
};

int main(){

    /*
    inheritance = A class can recieve attributes and methods from
    another Class children classes inherit from a Parent class
    Helps to reuse similar code found within multiple classes
    */

    Dog dog;
    Cat cat;

    // std::cout << dog.alive << '\n';
    // dog.eat();
    // dog.bark();

    std::cout << cat.alive << "\n";
    cat.eat();

    cat.meow();
    cat.bark();

    Cube cube(20);
    std::cout << cube.area << "cm\n";
    std::cout << cube.volume << "cm^3\n";

    Sphere sphere(10);

    std::cout << sphere.area << "cm\n";
    std::cout << sphere.volume << "cm^3\n";

    return 0;
}