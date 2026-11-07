# Valid Palindrome

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

A phrase is a  **palindrome**  if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true` *if it is a  **palindrome**, or* `false` *otherwise*.

 

 **Example 1:** 

```
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

```

 **Example 2:** 

```
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

```

 **Example 3:** 

```
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

```

 

 **Constraints:** 

- 1 <= s.length <= 2 * 105
- s consists only of printable ASCII characters.

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 37.64%)  
**Memory:** 10.6 MB (beats 9.96%)  
**Submitted:** 2026-11-07T10:42:46.575Z  

```cpp
class Solution {
public:
    bool isPalindrome(string s) {

        string r;
        if (s == " ")
            return true;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' ||
                (s[i] >= '0' && s[i] <= '9')) {

                s[i] = tolower(s[i]);

                r.push_back(s[i]);
            } else {
                continue;
            }
        }
        string e = r;
        reverse(e.begin(), e.end());

        if (e == r)
            return true;
        else
            return false;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/valid-palindrome/)