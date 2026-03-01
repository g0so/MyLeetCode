#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> nums, int target)
{
    // Create a unordered map.
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        //The below line checks if the calculated complement already exists as a key in the mp hashmap.
        //It is true if the complement has been encountered in a previous iteration of the loop.
        if (mp.find(complement) != mp.end())
            return {mp[complement], i};
        //if the complement is not found during the current iteration,
        //this line adds the current number as a key with the index 'i' as it's value 
        mp[nums[i]] = i;
    }
    return {};// return empty map if no solution is found.
}

int main(void)
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> indices = twoSum(nums, target);
    for (auto const element : indices)
        cout << element << " ";
    cout << endl;
}