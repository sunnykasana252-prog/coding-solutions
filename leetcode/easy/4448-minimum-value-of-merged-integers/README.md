# Q1. Minimum Value of Merged Integers

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer array `nums` of even length `n`.

You have to  **merge**  the elements of `nums` in pairs by merging `nums[0]` with `nums[1]`, `nums[2]` with `nums[3]`, and so on, until `nums[n - 2]` with `nums[n - 1]`.

Return the  **minimum**  value among all the resulting merged integers.

To  **merge**  two integers, concatenate all the decimal digits of the first integer followed by all the decimal digits of the second integer.

 

 **Example 1:** 

 **Input:**  nums = [23,55,42,21]

 **Output:**  2355

 **Explanation:** 

- Merging nums[0] = 23 and nums[1] = 55 gives 2355.
- Merging nums[2] = 42 and nums[3] = 21 gives 4221.
- The minimum value among the merged numbers is min(2355, 4221) = 2355.

 **Example 2:** 

 **Input:**  nums = [34,7,11,11]

 **Output:**  347

 **Explanation:** 

- Merging nums[0] = 34 and nums[1] = 7 gives 347.
- Merging nums[2] = 11 and nums[3] = 11 gives 1111.
- The minimum value among the merged numbers is min(347, 1111) = 347.

 **Example 3:** 

 **Input:**  nums = [9,20]

 **Output:**  920

 **Explanation:** 

- Merging nums[0] = 9 and nums[1] = 20 gives 920.
- There is only one merged number, so the minimum value is 920.

 

 **Constraints:** 

- 2 <= n == nums.length <= 100
- n is even
- 1 <= nums[i] <= 1000

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 33.33%)  
**Memory:** 31.3 MB (beats 98.96%)  
**Submitted:** 2026-11-01T03:08:02.084Z  

```cpp
class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        vector<int> a;

        for(int i = 0; i < nums.size()-1; i += 2) {
            int x = 1;
            int temp = nums[i+1];

            while(temp > 0) {
                temp /= 10;
                x *= 10;
            }

            int p = nums[i] * x + nums[i+1];
            a.push_back(p);
        }
        int mini = *min_element(a.begin(), a.end());

        return mini;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/minimum-value-of-merged-integers/)