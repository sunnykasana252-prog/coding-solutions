class Solution {
public:
    int calculateScore(int a, int b) {
     
        int x=0,y=0;
        while(a>0){
          int p=a/2;
            if(p==1)
            x++;
            a=a/2;
        }
         while(b>0){
          int e=b/2;
            if(e==1)
            y++;
             b=b/2;
        }
        if(x>=y)
        return x*y;
        else
      return x/y;

        
    }
};