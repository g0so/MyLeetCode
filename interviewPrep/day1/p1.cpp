#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // TODO: Implement your logic here
        unordered_map<int, int> mp;
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (mp.find(nums[i]) != mp.end())
                return true;
            mp[nums[i]] = i;
        }
        return false;
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    bool result = sol.containsDuplicate(nums);

    if(result)
        cout << "True (Duplicate exists)" << endl;
    else
        cout << "False (No duplicates)" << endl;

    return 0;
}