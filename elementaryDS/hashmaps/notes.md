# What's a hashmap?

A Hash map or a hash table is a data structure that stores data in key-value pairs. <br>
This allows for highly efficient insertion, deletion, and lookup operations (Avg time complexity: O(1); Worst Case : O(n) - due to collisions) <br>
It uses a hash function to compute an index into an array of buckets, determining where a value should be stored based on it's key. <br>
It's known as a dictionary in python. <br>
Keys in a hashmap must be immutable (in most langauges), the hasmap itself is mutable <br>

# LeetCode: (Easy Level)
## 1. Two Sum
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

## 2. Contains Duplicate (Leetcode 217)
https://leetcode.com/problems/contains-duplicate/description/

Problem : You are given an array with numbers. <br>
Goal : return true if duplicates exist, else false. <br>

Using a set is better than a hasmap for this <br>
Just check if element already exists <br>

If element already in set -> return true <br>
else insert into set <br>

## 3. Valid Anagram
https://leetcode.com/problems/valid-anagram

Problem: You are given two strings s and t <br>
Goal : return true if t is an anagram of s, and false otherwise <br>

What's an Anagram? <br>
Same no of letters, same frequency of letters, order does not matter. <br>

### Approach : Use Hashmap
1. Count all the characters in s in the freq array. <br>
2. Subract all the characters in t in the freq array. <br>
3. if the count of some character is less than 0 then return false; base case -> return true; <br>
# LeetCode (Medium Level)
## 1. Group Anagrams (49)
https://leetcode.com/problems/group-anagrams/description/

Given: string array <br>
Goal: Group the anagrams together in any order <br>
Input: strs = ["eat","tea","tan","ate","nat","bat"] <br>
Output: [["bat"],["nat","tan"],["ate","eat","tea"]] <br>

Approach: <br>
1. Create a hashmap (unordered_map<string, vector<string>> mp) (key is the sorted word, values are the grouped anagrams)<br>
2. Sort each word in the array using for loop. <br>
3. Push the string into the hashmap. <br>

## 2. Longest Substring without repeating characters
https://leetcode.com/problems/longest-substring-without-repeating-characters/ <br>
Pattern: Hashmap + Sliding Window (Check twoPointers folder before this). <br>
### Approach: 
Use a hashmap to store the last seen index of each character. <br>
Expand the window using a right pointer (for loop) <br>
If a duplicate character is found within the current window, move left pointer directly to lastSeenIndex + 1; <br>
### Steps: 
1. Initialize left  = maxLength = 0; & map<char, int> to store the lastSeen Index. <br>
2. Iterate right <br>
3. If s[right] exists in map and map[s[right]] >= left (in the code s[right] = current). <br>
    move left = map[current] + 1;<br>
4. Update Hashmap <br>
    map[current] = right;<br>
5. Update maxLength <br>
    maxLength = max(maxLength, right - left + 1)<br>

## 3. Three Sum
We've done Two Sum before. <br>
The idea there was: fix one number -> find another using hashmap. <br>

Now what if we have three numbers that sum to zero? <br>
Before reading further, try to think how you can reduce this problem. <br>

Solution:

Fix one number, then solve Two Sum on the remaining array. <br>

nums[i] + nums[left] + nums[right] = 0  
→ nums[left] + nums[right] = -nums[i]
Problem with Hashmap:

If we use hashmap for every i, it leads to duplicate triplets and becomes messy to handle. <br>

Key Insight:

Sort the array first. <br>

Why? <br>

Helps avoid duplicates <br>
Enables two pointer approach instead of hashmap <br>
Approach:

After sorting, fix i, then: <br>

left = i + 1  
right = n - 1  

Now calculate: <br>

sum = nums[i] + nums[left] + nums[right]
Cases:
sum == 0 -> triplet found <br>
sum < 0 -> move left++ <br>
sum > 0 -> move right-- <br>
Handling Duplicates:

Skip duplicate i values: <br>

if (i > 0 && nums[i] == nums[i - 1]) continue;

After finding a valid triplet: <br>

while (left < right && nums[left] == nums[left + 1]) left++;
while (left < right && nums[right] == nums[right - 1]) right--;

Then move both pointers: <br>

left++;
right--;
Complexity:

Sorting -> O(n log n) <br>
Two pointers -> O(n²) <br>

Final: O(n²) <br>
