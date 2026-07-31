class Solution {
public:
int solve(vector<int>& nums , int target , int left , int right){
    
        while(left <= right){
            int mid = left + (right - left)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                left = mid+1;
            }
            else if(nums[mid] > target){
                right = mid-1;
            }
        }
        return -1;
}
    int search(vector<int>& nums, int target) {
        
        int n = nums.size();
        
      return   solve(nums , target , 0 , n-1);

        
    }
};