#include <iostream>

int main() 
{
    auto myNum = 42;
    auto myFloat = 3.14159;
    auto myChar = 'a';

    std::cout << "myNum is of type " << typeid(myNum).name() << " and has value " << myNum << std::endl;
    std::cout << "myFloat is of type " << typeid(myFloat).name() << " and has value " << myFloat << std::endl;
    std::cout << "myChar is of type " << typeid(myChar).name() << " and has value " << myChar << std::endl;
    return 0; 
}
