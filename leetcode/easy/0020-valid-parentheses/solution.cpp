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