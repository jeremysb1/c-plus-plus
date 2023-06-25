#include <iostream>

int main()
{
    int temperature;
    int wind_speed;
    bool isWindy = false;
    bool isCold = true;
    std::cout << "What is the temperature today in Celsius?";
    std::cin >> temperature;
    std::cout << "How strong is the wind outside from 1-10?";
    std::cin >> wind_speed;

    if (wind_speed > 5)
    {
        isWindy = true;
    }
    else
    {
        isWindy = false;
    }
    if (temperature <= 5)
    {
        isCold = true;
    }
    else 
    {
        isCold = false;
    }
    if (isWindy && isCold)
    {
        std::cout << "I am not running" << std::endl;
    }
    else{
        std::cout << "I am running." << std::endl;
        
    }
}  

