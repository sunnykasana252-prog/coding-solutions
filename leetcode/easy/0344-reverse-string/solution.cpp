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