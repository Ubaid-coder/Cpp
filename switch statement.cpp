#include <iostream>

int main()
{
    /*
    switch alternaive to using many 'else if' statemetns
    compare one value against matching cases.
    */

    // int month;

    // std::cout << "Enter the month (1-12): ";
    // std::cin >> month;

    // switch (month)
    // {
    // case 1:
    //     std::cout << "It is January";
    //     break;
    // case 2:
    //     std::cout << "It is Februray";
    //     break;
    // case 3:
    //     std::cout << "It is March";
    //     break;
    // case 4:
    //     std::cout << "It is April";
    //     break;
    // case 5:
    //     std::cout << "It is May";
    //     break;
    // case 6:
    //     std::cout << "It is June";
    //     break;
    // case 7:
    //     std::cout << "It is July";
    //     break;
    // case 8:
    //     std::cout << "It is August";
    //     break;
    // case 9:
    //     std::cout << "It is September";
    //     break;
    // case 10:
    //     std::cout << "It is October";
    //     break;
    // case 11:
    //     std::cout << "It is November";
    //     break;
    // case 12:
    //     std::cout << "It is December";
    //     break;

    // default:
    //     std::cout << "Invalid Input!";
    // }

    char grade;

    std::cout << "What is your grade?: ";
    std::cin >> grade;
    grade = std::toupper(grade);

    switch (grade)
    {
    case 'A':
        std::cout << "You did great!";
        break;
    case 'B':
        std::cout << "Good Job";
        break;
    case 'C':
        std::cout << "Need Improvement";
        break;
    case 'F':
        std::cout << "You are fail";
        break;

    default:
        std::cout << "Invalid Grade";
    }

    return 0;
}