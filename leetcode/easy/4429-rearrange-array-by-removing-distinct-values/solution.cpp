class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> freq;
        vector<int>values;

        for(int i=0;i<nums.size();i++){
            if(i==0||nums[i]!=nums[i-1]){
                values.push_back(nums[i]);
                freq.push_back(1);
            }
            else{
                freq.back()++;
            }
        }
        vector<int>ans;

        while(true){
            bool any = false;

            for(int i=0;i<values.size();i++){
                if(freq[i]>0){
                    ans.push_back(values[i]);
                    freq[i]--;
                    any=true;
                }
            }
            if(!any){
                break;
            }
        }
        return ans;
    }
};