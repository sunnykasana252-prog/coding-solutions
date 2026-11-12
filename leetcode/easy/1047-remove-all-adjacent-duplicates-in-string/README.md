# Remove All Adjacent Duplicates In String

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given a string `s` consisting of lowercase English letters. A  **duplicate removal**  consists of choosing two  **adjacent**  and  **equal**  letters and removing them.

We repeatedly make  **duplicate removals**  on `s` until we no longer can.

Return  *the final string after all such duplicate removals have been made*. It can be proven that the answer is  **unique**.

 

Original
C++
 **Example 1:** 

```
Input: s = "abbaca"
Output: "ca"
Explanation: 
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".

```

 **Example 2:** 

```
Input: s = "azxxzy"
Output: "ay"

```

 

 **Constraints:** 

- 1 <= s.length <= 105
- s consists of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 2593 ms (beats 5.00%)  
**Memory:** 12.2 MB (beats 99.83%)  
**Submitted:** 2026-11-12T08:09:42.230Z  

```cpp
class Solution {
public:
    string removeDuplicates(string s) {
     
     for(int i=0;i+1<s.length();i++){
        if(s[i]==s[i+1]){
            s.erase(i, 2);
            i=-1;
        }
     }
     return s;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/)