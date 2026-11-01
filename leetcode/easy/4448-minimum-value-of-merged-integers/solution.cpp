class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        vector<int> a;

        for(int i = 0; i < nums.size()-1; i += 2) {
            int x = 1;
            int temp = nums[i+1];

            while(temp > 0) {
                temp /= 10;
                x *= 10;
            }

            int p = nums[i] * x + nums[i+1];
            a.push_back(p);
        }
        int mini = *min_element(a.begin(), a.end());

        return mini;
    }
};