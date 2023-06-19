#include <iostream>

int main()
{
    int numOfApples = 10;
    char favoriteLetter = 'J';
    float pi = 3.14159;
    double distanceToMoon = 238885.947;
    bool isSunShining = true;

    std::cout << "I have " << numOfApples << " apples." << std::endl;
    std::cout << "My favorite letter is " << favoriteLetter << "." << std::endl;
    std::cout << "The value of pi is approximately " << pi << "." << std::endl;
    std::cout << "The distance to the moon is " << distanceToMoon << " miles." << std::endl;
    std::cout << "Is the sun shining?" << std::boolalpha << isSunShining << std::endl;
    return 0;
}