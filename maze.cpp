#include <iostream>

int main()
{
    std::cout << "The mouse starts collecting his cheese." << std::endl;
    for (int run_count = 1; run_count <= 6; ++run_count)
    {
         std::cout << "The mouse ran " << run_count << " and got some cheese." << std::endl;
    }
    std::cout << "The mouse got all the cheese." << std::endl;
    return 0;
}