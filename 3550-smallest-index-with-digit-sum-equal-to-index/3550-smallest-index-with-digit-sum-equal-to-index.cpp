class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int mini = 1001;
        int n = nums.size();
        for(int i =0;i<n;i++){
            int k = nums[i];
            int cnt = 0;
            while(k>0){
                
                int a = k%10;
                cnt += a;
                k = k/10;

            }
            if(cnt == i){
                mini = min(mini , cnt);
            }
        }
        if(mini > 1000) return -1;
        return mini;
    }
};