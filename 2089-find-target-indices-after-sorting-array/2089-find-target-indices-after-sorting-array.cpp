class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> arr;
        sort(nums.begin(),nums.end());
        int i=0;
        for( i;i<nums.size();i++){
            if(target==nums[i]){
                arr.push_back(i);
            }

        } return arr;

    }
};