class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
             sum += nums[i];
        }
        int maxsum = nums[0];
        int sum1 = nums[0];
        for(int i=1;i<n;i++){
            sum1 = max(nums[i] , sum1+nums[i]);
            maxsum = max(maxsum , sum1);
        }
       int minsum = nums[0];
       int sum2 = nums[0];
       for(int i =1;i<n;i++){
          sum2 = min(nums[i] , sum2+nums[i]);
          minsum = min(minsum , sum2);
       } 
       int cirsum = sum-minsum;
       if(maxsum >0)
       return max(maxsum,cirsum);
    else
      return maxsum;
    }
};