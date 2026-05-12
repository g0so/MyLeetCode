# Greedy Algorithm
An optimization strategy where the algorithm chooses locally optimum solution at each step assuming the best solution will be found this way. <br>

It only works for certain problems.

## Example: Fractional Knapsack
Given two arrays with values, and weights, and an integer capacity. <br>
The goal is maximize the value within the given capacity. <br>
### Approach:
1. Divide the items by value / weight ratio. <br>
2. Arrange them in decending order. <br>
3. Add the item with highest value completely if you can or partially, and move on to the next if capacity is left. <br>
Refer to the file fknapsack.cpp for code (it's easy to implement by yourself, so it's better to try) <br>