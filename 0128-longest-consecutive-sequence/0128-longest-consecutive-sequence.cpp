class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n==1) return 1;

        int curr = 1;
        int maxi = 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            int diff = nums[i+1]-nums[i];
      

            if(diff == 1 ){
                curr ++;
            }
            else if(nums[i] == nums[i+1]){
                curr++;
                curr--;
               // continue;
            }
            else {
                curr = 1;
                
            }
            maxi = max(maxi , curr);
        }
        return maxi;
    }
};