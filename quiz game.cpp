#include <iostream>

int main()
{
    std::string questions[] = {"1. What year was C++ created?: ",
                               "2. Who invented C++?: ",
                               "3. What is the prdecessor of C++?: ",
                               "4. Is the Earth Flat?: "};

    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D.1989"},
                                {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburg"},
                                {"A. C", "B. C+", "C. C--", "D. B++"},
                                {"A. yes", "B. no", "C. sometimes", "D. What's Earth?"}};

    char answerKey[] = {'C', 'B', 'A', 'B'};

    int questionsize = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score;

    for (int i = 0; i < questionsize; i++)
    {
        std::cout << "**********************\n";
        std::cout << questions[i] << '\n';

        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
        {
            std::cout << options[i][j] << '\n';
        }

        std::cin >> guess;
        guess = std::toupper(guess);

        if (guess == answerKey[i])
        {
            std::cout << "CORRECT \n";
            score++;
        }
        else
        {
            std::cout << "WRONG\n";
            std::cout << "Answer: " << answerKey[i] << '\n';
        }
    }

    std::cout << "RESULTS\n";
    std::cout << "CORRECT GUESSES: " << score << '\n';
    std::cout << "Questions: " << questionsize << '\n';
    std::cout << "SCORE: " << (score/(double)questionsize)*100 << "%" << "\n";
    std::cout << "*********************";

    return 0;
}