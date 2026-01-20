#include <iostream>

int main()
{

    int rows, columns;
    char symbols;

    std::cout << "How Many Rows?: ";
    std::cin >> rows;

    std::cout << "How Many Columns?: ";
    std::cin >> columns;

    std::cout << "Enter a symbol: ";
    std::cin >> symbols;

    for (int i = 1; i <= columns; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            std::cout << symbols;
        }
        std::cout << '\n';
    }

    return 0;
}