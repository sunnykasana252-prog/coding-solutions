class Solution {
public:
    int strStr(string haystack, string needle) {
               if(haystack.find(needle) != string::npos){
                int pos = haystack.find(needle);
                return pos;
               }   
               else{
                return -1;
               }
    }
};