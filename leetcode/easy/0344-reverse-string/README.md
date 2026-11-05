# Reverse String

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Write a function that reverses a string. The input string is given as an array of characters `s`.

You must do this by modifying the input array in-place with `O(1)` extra memory.

 

 **Example 1:** 

```
Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

```

 **Example 2:** 

```
Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]

```

 

 **Constraints:** 

- 1 <= s.length <= 105
- s[i] is a printable ascii character.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 27 MB (beats 91.98%)  
**Submitted:** 2026-11-05T10:15:56.886Z  

```cpp
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size()-1;
        int e=0;
        while(e<n){
            swap(s[e++],s[n--]);
        }
    

    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-string/)