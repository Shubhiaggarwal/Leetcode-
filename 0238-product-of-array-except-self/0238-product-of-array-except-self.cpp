class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroes = 0;
        int n = nums.size();
        vector<int> res(n);
        int prod = 1;
        for( int i = 0 ; i<n;i++){
             if(nums[i]==0){
                zeroes++;
                
             }
             else{
             prod = prod * nums[i];
             }
        } 
        if(zeroes >=2){
          for(int i = 0;i<n ; i++){
            res[i] = 0;
          }
        }
        else if(zeroes == 1){
            for(int i = 0;i<n;i++){
                if(nums[i] == 0){
                    res[i] = prod;
                }
                else{
                    res[i] = 0;
                }
            }
        }
        else{
            for(int i = 0;i<n ; i++){
            res[i] = prod/nums[i];
          }
        }
        return res;
    }
};