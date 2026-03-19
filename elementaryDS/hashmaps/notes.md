# What's a hashmap?

A Hash map or a hash table is a data structure that stores data in key-value pairs. <br>
This allows for highly efficient insertion, deletion, and lookup operations (Avg time complexity: 1) <br>
It uses a hash function to compute an index into an array of buckets, determining where a value should be stored based on it's key. <br>
It's known as a dictionary in python. <br>
They're immutable to ensure that the hashvalue doesn't change <br>

# LeetCode: (Easy Level)
## Example: Two Sum
Link: [Two Sum] (https://leetcode.com/problems/two-sum/)

Given an array of intergers nums and an integer target, return indices of the two numbers such that they add up to target.
Assume that each input has only one solution and the same element must not be used twice.
Any order is fine. <br>

### Explanation: <br>
What a iterator is: pointer -> memory in arrays; iterator -> element in STL(Standard Template Library) containers <br>

An iterator is an object that behaves like a generalized pointer used to traverse elements of STL containers.

So the line mp[nums[i]] = i; <br>
What it basically does is, it takes the number let's say 2. <br>
Now there's a hash function; hash (2) -> generates a large integer. <br>

Imagine there are fixed number of buckets. (table_size = 10 for example). <br>
So we've 10 buckets. Now we take the large number and apply the modulus operate and store the number there. <br>
<br>
Like bucket_index = hash(42) % 10 <br>
Let's say the large number is 2359948687. Then it goes to bucket 7 and the number is stored as (2, i); <br>

So when you write mp.find(nums[i]) it's usually takes O(1) to find the number. <br>
hash -> bucket -> check few elements. <br>
Yes if both the numbers get the bucket, both of them will go in it. <br>


mp.end() is a special iterators that just means "past the last element". Think of it as a marker saying "Nothing found." <br>

so basically "if(mp.find(nums[i]) != mp.end()) <br>
There are two cases, <br>
1. You find the element <br>
    find() != mp.end() and that means the element exists <br>
2. You don't find it <br>
    then find() returns mp.end(). <br>
The if statement in words: "If the iterator returned by find() is NOT the special end() marker" <br> 
---------------------------------------------------------------------------------------------------------

## Example : Contains Duplicate (Leetcode 217)
https://leetcode.com/problems/contains-duplicate/description/

Problem : You are given an array with numbers. <br>
Goal : return true if duplicates exist, else false. <br>

The solution is same as the last problem. <br>

## Example : Valid Anagram
https://leetcode.come/problems/valid-anagram

Problem: You are given two strings s and t <br>
Goal : return true if t is an anagram of s, and false otherwise <br>

What's an Anagram? <br>
Same no of letters, same frequency of letters, order does not matter. <br>

### Approach : Use Hashmap
1. Count all the characters in s in the freq array. <br>
2. Subract all the characters in t in the freq array. <br>
3. if the count of some character is less than 0 then return false; base case -> return true; <br>
# LeetCode (Medium Level)
## Group Anagrams (49)
https://leetcode.com/problems/group-anagrams/description/

Given: string array <br>
Goal: Group the anagrams together in any order <br>
Input: strs = ["eat","tea","tan","ate","nat","bat"] <br>
Output: [["bat"],["nat","tan"],["ate","eat","tea"]] <br>

Approach: <br>
1. Create a hashmap (unordered_map<string, vector<string>> mp) (key is the sorted word, values are the grouped anagrams)<br>
2. Sort each word in the array using for loop. <br>
3. Push the string into the hashmap. <br>
