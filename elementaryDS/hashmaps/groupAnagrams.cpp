#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (string s : strs)
        {
            string str = s;
            sort(str.begin(), str.end());
            mp[str].push_back(s);
        }

        vector<vector<string>> result;
        for (auto &[key, strings]: mp)
            result.push_back(strings);
        return result;
    }
    
};

int main() {
    Solution solution;
    
    // Test case 1
    vector<string> strs1 = {"eat", "tea", "ate", "eat", "tan", "nat", "bat"};
    vector<vector<string>> result1 = solution.groupAnagrams(strs1);
    
    // Test case 2
    vector<string> strs2 = {""};
    vector<vector<string>> result2 = solution.groupAnagrams(strs2);
    
    // Test case 3
    vector<string> strs3 = {"a"};
    vector<vector<string>> result3 = solution.groupAnagrams(strs3);
    
    for (auto& group : result1) {
        for (string s : group)
            cout << s << " ";
        cout << endl;
    }
    return 0;
}