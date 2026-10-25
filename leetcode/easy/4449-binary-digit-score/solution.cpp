class Solution {
public:
    int calculateScore(int a, int b) {
     
        int x=0,y=0;
        while(a>0){
            if(a%2==1)
            x++;
            
            a=a/2;
        }
         while(b>0){
            if(b%2==1)
            y++;
             
             b=b/2;
        }
        if(x>=y)
        return x*y;
        else
      return (y!=0)?y/x:0;

        
    }
};