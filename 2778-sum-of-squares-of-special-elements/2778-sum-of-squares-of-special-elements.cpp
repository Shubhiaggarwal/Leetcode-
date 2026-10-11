class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
         int n = nums.size();
        int cnt = 0;
        for(int i= 0;i<n;i++){
            int k = i+1;
            if(n%k==0){
                cnt += nums[i]*nums[i];
            }
        }
        return cnt;
    }
};