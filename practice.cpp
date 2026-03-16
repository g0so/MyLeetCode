#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum (vector<int> indices, int target)
{
    unordered_map<int, int> mp;

    for (int i = 1; i < indices.size(); i++)
    {
        int complement = target - indices[i];
        
        if(mp.find(complement) != mp.end())
            return {mp[complement, i]};
        mp[indices[i]] = i;
    }
    return {};
}

int main(void)
{
    vector<int> arr = {23, 5, 12, 65, 24};
    int target = 35;
    vector<int> indices = twoSum(arr, target);

    for (auto const element : indices)
        cout << element << " ";
    cout << endl;
}