class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {

        vector<vector<string>> ans;
        int n = max(s1.size(), s2.size());
        for (int i = 0; i < n; i++) {
            if (i >= s1.size() || i >= s2.size()) {
                ans.push_back({i < s1.size() ? string(1, s1[i]) : "",
                               i < s2.size() ? string(1, s2[i]) : ""});
            } else if (s1[i] != s2[i]) {
                ans.push_back({string(1, s1[i]), string(1, s2[i])});
            }
           
        }
         return ans;
    }
    };