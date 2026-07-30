class Solution {
public:
    void nextPermutation(vector<int>& nums) {
     int gola = -1;
     int n = nums.size();
     for(int i = n-1; i>0 ; i--){
        if(nums[i]>nums[i-1]){
            gola = i-1;
            break;
        }

     } 
     if(gola != -1){
        int swapi = gola;
        for(int j = n-1;j>=gola;j--){
            if(nums[j]>nums[gola]){
            swapi = j;
             break;
            }
        }
        swap(nums[gola],nums[swapi]);
     } 
          reverse(nums.begin()+gola+1,nums.end());
    }
};