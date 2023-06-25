#include <iostream>

// Fahrenheit = Celsius (°C) times 9/5 plus 32

int main()
{
     double Fahrenheit{}, Celsius{};
    std::cout << "Please enter the temperature in Celsius: ";
    std::cin >> Celsius;

    Fahrenheit = Celsius * (9.0 / 5.0) + 32;
    std::cout << "The temperature in Fahrenheit is: " << Fahrenheit << std::endl;
    return 0;
}