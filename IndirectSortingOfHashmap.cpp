#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    unordered_map<int, int> hash;
    vector<int> myVec(10);
    cout << "Enter values in array of size 10 :" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> myVec[i];
    }
    for (int i = 0; i < 10; i++)
    {
        hash[myVec[i]] += 1;
    }
    cout << "Initial Hashmap :" << endl;
    for (const auto &pair : hash)
    {
        cout << pair.first << " -> " << pair.second << endl;
    }

    vector<pair<int, int>> vec(hash.begin(), hash.end());
    sort(vec.begin(), vec.end());

    cout << "After Sorting the Initial Hashmap :" << endl;
    for (const auto &pair : vec)
    {
        cout << pair.first << " -> " << pair.second << endl;
    }

    for (auto &pair : vec)
    {
        swap(pair.first, pair.second);
    }

    cout << "After exchanging key and value of each pair of Hashmap :" << endl;
    for (const auto &pair : vec)
    {
        cout << pair.first << " -> " << pair.second << endl;
    }

    sort(vec.begin(), vec.end());

    cout << "After Sorting the customised Hashmap with exchanged pair values :" << endl;
    for (const auto &pair : vec)
    {
        cout << pair.first << " -> " << pair.second << endl;
    }
    return 0;
}
