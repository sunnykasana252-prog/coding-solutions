class Solution {
public:
    int lengthOfLastWord(string s) {
        int x=0;
        for (int i = s.size() - 1; i >= 0; i--) {

            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
                x++;
            }
           else if (s[i] == ' ' && x == 0)
                continue;
            else
                break;
        }
        return x;
    }
};