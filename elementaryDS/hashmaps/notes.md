# What's a hashmap?

A Hash map or a hash table is a data structure that stores data in key-value pairs. <br>
This allows for highly efficient insertion, deletion, and lookup operations (Avg time complexity: 1) <br>
It uses a hash function to compute an index into an array of buckets, determining where a value should be stored based on it's key. <br>
It's known as a dictionary in python. <br>
They're immutable to ensure that the hashvalue doesn't change <br>
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
