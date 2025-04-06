#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> frequencySort(vector<int> &nums)
    {
        unordered_map<int, int> hash;
        for (auto const &num : nums)
        {
            hash[num] += 1;
        }
        vector<pair<int, int>> myVec(hash.begin(), hash.end());
        sort(myVec.begin(), myVec.end(), [](pair<int, int> &a, pair<int, int> &b)
             {
            if(a.second == b.second){
                return a.first > b.first ;
            }
            return a.second < b.second ; });
        vector<int> ans;
        for (auto const &p : myVec)
        {
            for (int i = 0; i < p.second; i++)
            {
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};
