#include <iostream>

int main()
{
    double temp_list[4] = { 34.5, 27.8, 26.8, 22.0 };

    temp_list[3] = 15.4;
    
    std::cout << temp_list[3] << std::endl;
    return 0;
}