# Sqrt(x)

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a non-negative integer `x`, return  *the square root of* `x` *rounded down to the nearest integer*. The returned integer should be  **non-negative**  as well.

You  **must not use**  any built-in exponent function or operator.

- For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.

 

 **Example 1:** 

```
Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.

```

 **Example 2:** 

```
Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.

```

 

 **Constraints:** 

- 0 <= x <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 7 ms (beats 17.81%)  
**Memory:** 8.3 MB (beats 99.70%)  
**Submitted:** 2026-10-26T17:10:06.034Z  

```cpp

class Solution {
public:
    int mySqrt(int x) {

        if (x == 0)
            return 0;

        if (x == 1 || x == 2 || x == 3)
            return 1;

        long long a = 0;
        int b = 0;
        int i = 1;

        while (a <= x) {
            a = 1LL * i * i;

            if (a <= x) {
                b = i;
            }

            i++;
        }

        return b;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/sqrtx/)