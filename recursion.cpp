#include <iostream>

// void walk(int steps);
int factorial(int num);

int main()
{

    std::cout << factorial(10);

    // walk(10000);
    return 0;
}

int factorial(int num)
{
    int result = 1;
    //Iterative Approach
    // for (int i = 1; i <= num; i++)
    // {
    //     result = result * i;
    // }

    //Recursive Approach
    if(num > 1){
        return num * factorial(num -1);
    }else{
        return 1;
    }
    
    return result;
}

/*
void walk(int steps)
{
    // Iterative Approach
    for (int i = 0; i < steps; i++)
    {
        std::cout << "You take a step!\n";
    }

    //Recursive Approach
    if (steps > 0)
    {
        std::cout << "You take a step!\n";
        walk(steps-1);
    }
}
    */