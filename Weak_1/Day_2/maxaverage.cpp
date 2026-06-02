class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       
          
        int sum =  0;
        for(int i=0;i<k;i++) sum+=nums[i];

        int maxaverage = sum;
        int n=nums.size();
        int i = 0;
        int j = k;

       while(j<n){
         sum =sum-nums[i]+nums[j];
         maxaverage = max(maxaverage,sum); 
         i++;
         j++;
       }
         return (double)maxaverage/k;   
       
    }
};