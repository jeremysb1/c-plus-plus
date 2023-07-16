#include <iostream>

int main()
{
    int jokes[] = { 0, 0, 0, 0};
    int jokeIndex = 0;
    bool keepTellingJokes = true;

    std::cout << "My girlfriend gave me an ultimatum, choose her or the booze" << std::endl;
    std::cout << "So, I made the easy decision to move out." << std::endl;
    std::cout <<"Who says adulting is hard." << std::endl;
    jokes[jokeIndex]++;
    std::cout << "----------------" << std::endl;

    while (keepTellingJokes)
    {
        std::cout << "Do you want to hear another joke" << std::endl;
        std::cout << "Enter Y for yes or N for no" << std::endl;
        char userChoice;
        std::cin >> userChoice;

        if (userChoice == 'Y' || userChoice == 'y')
        {
            jokeIndex++;
            if (jokeIndex > 3)
            {
                jokeIndex = 0;
            }
            switch (jokeIndex)
            {
            case 0:
                std::cout << "Why don't scientists trust atoms?" << std::endl;
                std::cout << "Because they make up everything" << std::endl;
            case 1:
                std::cout << "What did the grape say when it got stepped on?" << std::endl;
                std::cout << "Nothing, it just let out a little wine." << std::endl;
                break;
            case 2:
                std::cout << "Why did the tomato turn red?" << std::endl;
                std::cout << "Because it saw the salad dressing!" << std::endl;
                break;
            default:
                std::cout << "Why did the scarecrow win an award?" << std::endl;
                std::cout << "Because he was outstanding in his field!" << std::endl;
                break;
            }

            jokes[jokeIndex]++;
            std::cout << "----------------" << std::endl;
        }
        else
        {
            keepTellingJokes = false;
        }
    }
    std::cout << "Thanks for listening. Goodbye." << std::endl;

    return 0;
}