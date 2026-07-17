class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int  i =0;
        int n = nums.size();
        int j = 0;
        int maxsum = INT_MIN;
        int sum = 0;
        while(j<n){ 
           sum = sum + nums[j];
           maxsum = max(maxsum , sum);
           while(sum<0 && i< n){
            
            sum = sum - nums[i]; 
            i++;
           }
           j++;
        }
        return maxsum;
    }
};