#include <iostream>
#include <vector>

using namespace std;

int main()
{
    double temp_list[4] = { 34.5, 27.8, 26.8, 22.0 };

    temp_list[3] = 15.4;
    
    cout << temp_list[3] << endl;

    vector<double> temperatures = { 34.2, 27.9, 26.4 };
    cout << temperatures.at(0) << endl;

    return 0;
}