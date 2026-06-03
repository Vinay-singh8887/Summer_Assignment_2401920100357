class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxsum  = nums[0];
        int tempsum = 0;

        for(int i = 0;i<n;i++){
              tempsum = tempsum+nums[i];
            maxsum = max(maxsum,tempsum);

            if( tempsum <0 )
             tempsum =0;

        }
        return maxsum;

    }
};