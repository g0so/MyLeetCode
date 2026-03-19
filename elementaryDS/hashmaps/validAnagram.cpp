#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

// Return true if strings s and t are anagrams of each other.
// Implement your logic inside this function.
bool isAnagram(const string &s, const string &t)
{
    if (s.length() != t.length())
        return false;
    unordered_map<char, int> mp;
    for (char c : s)
        mp[c]++;
    for (char c: t)
    {
        mp[c]--;
        if (mp[c] < 0) return false;
    }
    return true;
}

int main()
{
    string s = "anagram";
    string t = "nagaram";

    bool result = isAnagram(s, t);
    cout << boolalpha << result << endl;
    return 0;
}
