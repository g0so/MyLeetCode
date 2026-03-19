#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool containsDuplicate(vector<int> nums)
{
    unordered_map<int, int> mp;
    
    for (int i = 0; i < nums.size(); i++)
    {
        if (mp.find(nums[i]) != mp.end())
            return true;
        mp[nums[i]] = i;
    }
    return false;
}

int main(void)
{
    vector<int> nums = {1, 3, 5, 6, 1};
    bool var = containsDuplicate(nums);
    cout << var << endl;
}