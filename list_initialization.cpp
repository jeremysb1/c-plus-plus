#include <iostream>

int num {8};
int age {34};
double temp {12.3};
char label {'L'};

int main() 
{
    std::cout << num << std::endl;
    std::cout << age << std::endl;
    std::cout << temp << std::endl;
    std::cout << "The label is " << label << "." << std::endl;

    return 0;
}