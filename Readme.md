# Array Problems and Solutions

## Problem 1: Missing Number in Array

### Problem Statement:
Given an array containing `n` distinct numbers taken from the range `1` to `n+1`, find the missing number in the array using the sum formula and `max_element` for dynamically finding the maximum number in the array.

### Approach:

- **Step 1**: Find the maximum number in the array using `max_element()`.
- **Step 2**: Calculate the total sum of numbers from `1` to `max_number` using the sum formula:
  \[
  \text{Sum} = \frac{\text{max\_number} \times (\text{max\_number} + 1)}{2}
  \]
- **Step 3**: Calculate the sum of the elements present in the array.
- **Step 4**: The missing number is the difference between the total sum and the sum of the array.

### Example:

Given the array:
```cpp
{1, 2, 3, 4, 6, 7}


### Explanation:
This `README.md` covers both the missing number problem and the second largest/smallest element problem. It provides a description, step-by-step approach, time complexity analysis, and complete code examples for both problems.
