# Two Sum II
You've learnt about Two Sum I before, where the array is unsorted and you would have to return two indicies that add up to the target <br>
Here you'll get a sorted array instead. <br>
One pointer at the start and another pointer at the end <br>

Sample Input:<br>
numbers = [2,7,11,15], target = 9 <br>
Output: <br>
[1, 2] <br>

Steps: <br>
1. Initialize left = 0, right = n - 1; <br>
2. Loop while(left < right) <br>
3. Compute sum == numbers[left] + numbers[right] <br>
4. Compare with target, if equal return.<br>
    if sum < target then, left++; else right++; <br>

