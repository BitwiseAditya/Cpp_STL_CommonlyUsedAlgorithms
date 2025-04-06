// program demonstrating how to use find() with vector  in C++
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> vec(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> vec[i];
    }
    if (find(vec.begin(), vec.end(), 2) != vec.end())
    {
        cout << "2 exists in vec";
    }
    else
    {
        cout << "2 does not exist in vec";
    }

    return 0;
}
