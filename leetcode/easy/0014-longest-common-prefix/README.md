# Longest Common Prefix

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string `""`.

 

 **Example 1:** 

```
Input: strs = ["flower","flow","flight"]
Output: "fl"

```

 **Example 2:** 

```
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

```

 

 **Constraints:** 

- 1 <= strs.length <= 200
- 0 <= strs[i].length <= 200
- strs[i] consists of only lowercase English letters if it is non-empty.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 11.8 MB (beats 79.31%)  
**Submitted:** 2026-10-31T16:45:33.005Z  

```cpp
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s;

        if(strs.empty()) return s;

        for(int i = 0; i < strs[0].size(); i++) {

            char ch = strs[0][i];

            for(int j = 1; j < strs.size(); j++) {

                if(i >= strs[j].size() || strs[j][i] != ch) {
                    return s;
                }
            }

            s.push_back(ch);
        }

        return s;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-common-prefix/)