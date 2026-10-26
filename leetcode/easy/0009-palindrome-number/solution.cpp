class Solution {
public:
    bool isPalindrome(int x) {
       
         if(x<0)
        return false;

         long long a=0;
  int original=x;
        while(x>0){
            a=a*10+x%10;
           x= x/10;
        }
       
        if(original==a)
        return true;
        else
        return false;
    }
};