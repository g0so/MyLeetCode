//2553. Seperate the Digits in the array
//https://leetcode.com/problems/separate-the-digits-in-an-array/description/
//Convert to string
// c - '0' -> This converts character digit to integer digit. (ASCII)

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums)
    {
        vector<int> arr;
        for(int num : nums)
        {
            string s = to_string(num);
            for (char ch : s)
                arr.push_back(ch - '0'); // converting back to integer
        }
        return arr;
    }
};

int main() {
    vector<int> nums = {13, 25, 83, 77};

    Solution sol;
    vector<int> result = sol.separateDigits(nums);

    for(int digit : result) {
        cout << digit << " ";
    }
    cout << endl;
    return 0;
}