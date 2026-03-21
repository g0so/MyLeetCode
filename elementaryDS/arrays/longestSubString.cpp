#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

int lengthOfLongestSubString(string s)
{
    unordered_map<char, int> lastSeen;
    int left = 0;
    int maxLength = 0;

    for (int right = 0; right < s.length(); right++)
    {
        char current = s[right];

        if (lastSeen.find(current) != lastSeen.end() && lastSeen[current] >= left)
            left = lastSeen[current] + 1;
        
        lastSeen[current] = right;
        maxLength  = max(maxLength, right - left + 1);
    }
    return maxLength;
}

int main(void)
{
    string s = "abcabcbb";
    cout << "Longest substring length: " << lengthOfLongestSubString(s) << endl;
}