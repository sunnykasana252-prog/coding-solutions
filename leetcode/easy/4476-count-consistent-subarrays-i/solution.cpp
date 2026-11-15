class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int mini=nums[i];
            int AND=nums[i];
            for(int j=i;j<nums.size();j++){
               mini=min(mini,nums[j]);
                AND=AND&nums[j];
                if(mini==AND){
                    count++;
                }
            }
        }
        return count;
    }
};