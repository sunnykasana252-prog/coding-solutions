class Solution {
public:
    int mySqrt(int x) {
        if(x==0)
        return 0;

        long long a;
        int b;

      
        while(a<=x){
            int i=1;
          a=i*i;
           b=i; 
          i++;
         
        }
        return b;
    }
};