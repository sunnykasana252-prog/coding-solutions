# Valid Parentheses

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`, determine if the input string is valid.

An input string is valid if:

- Open brackets must be closed by the same type of brackets.
- Open brackets must be closed in the correct order.
- Every close bracket has a corresponding open bracket of the same type.

 

 **Example 1:** 

 **Input:**  s = "()"

 **Output:**  true

 **Example 2:** 

 **Input:**  s = "()[]{}"

 **Output:**  true

 **Example 3:** 

 **Input:**  s = "(]"

 **Output:**  false

 **Example 4:** 

 **Input:**  s = "([])"

 **Output:**  true

 **Example 5:** 

 **Input:**  s = "([)]"

 **Output:**  false

 

 **Constraints:** 

- 1 <= s.length <= 104
- s consists of parentheses only '()[]{}'.

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 13.66%)  
**Memory:** 10 MB (beats 8.08%)  
**Submitted:** 2026-10-28T05:27:35.912Z  

```cpp
class Solution {
public:
    bool isValid(string s) {
        stack<int> p;
        bool a = true;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                p.push(s[i]);
            } else {
                if (p.size()==0)
                return false;
                    int x = p.top();
                int y = s[i];
                if ((x == '(' && y == ')') || (x == '[' && y == ']') ||
                    (x == '{' && y == '}')) {
                    p.pop();

                } else
                    return false;
            }
        }
        if (!p.empty())
            a = false;

        return a;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/valid-parentheses/)