class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zero = 0;
        int prod = 1;
        vector<int> res;
        for(int i = 0;i<nums.size();i++){
           if(nums[i]==0 ){
            zero++;
            
           }
           else{
            prod = prod * nums[i];
           }
        }
        if(zero>1){
           for(int i = 0;i<nums.size();i++){
            res.push_back(0);
           }
        }
        if(zero==1){
           for(int i = 0;i<nums.size();i++){
            if(nums[i] == 0){
                res.push_back(prod);
            }
            else{
                res.push_back(0);
            }
           }

        }
        if(zero == 0){
            for(int i = 0;i< nums.size();i++){
                res.push_back(prod/nums[i]);
            }
        }
        return res;
    }
};