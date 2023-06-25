#include <iostream>

int main()
{
    int grade;
    std::cout << "Enter your grade: ";
    std::cin >> grade;
    if (grade < 60)
    {
        std::cout << "you have failed the course." << std::endl;
    }
    else 
    {
        std::cout << "Congratulations! You passed the course." << std::endl;
    }
    return 0;
}