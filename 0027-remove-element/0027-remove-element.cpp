class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> arr;
        int i=0;
        while(i<nums.size()){
            if(nums[i]==val){
                i++;
            }
            else{
                arr.push_back(nums[i]);
                i++;
            }
        }
        nums= arr;
        return arr.size();

        
    }
};