#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSumII (vector<int> nums, int target)
{
    int left = 0, right = nums.size() - 1;
    while (left < right)
    {
        int sum = nums[left] + nums[right];
        if (sum == target) return {left + 1, right + 1};
        else if (sum < target) left++;
        else right--;
    }
    return {};
}

int main(void)
{
    vector<int> arr = {1, 5, 6, 7, 12, 65};
    int target = 17;
    vector<int> result = twoSumII(arr, target);

    for (auto const element : result)
        cout << element << " ";
    cout << endl;
}