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