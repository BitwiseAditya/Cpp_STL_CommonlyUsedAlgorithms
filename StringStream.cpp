// Write a C++ program to input a string full of numbers and extract the numbers from the string using stringstream. Print the numbers.
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    // Write C++ code here
    string s;
    vector<int> vec;
    cout << "input a string full of numbers :" << endl;
    getline(cin, s);
    cin.ignore();
    stringstream ss(s);
    int number;
    while (ss >> number)
    {
        vec.push_back(number);
    }
    for (const auto &num : vec)
    {
        cout << num << endl;
    }

    return 0;
}
