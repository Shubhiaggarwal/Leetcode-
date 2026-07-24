class Solution {
public:
vector<vector<int>> res;
  int n ;
void solve(vector<int>& arr , int idx,vector<int> ans){
    if(idx >= n){

        res.push_back(ans);
        return ; 
    }
    ans.push_back(arr[idx]);
    solve(arr, idx+1, ans);
    ans.pop_back();
    solve(arr , idx+1,ans);

}
    vector<vector<int>> subsets(vector<int>& nums) {
      
        n = nums.size();
        vector<int> ans;
        solve(nums,0,ans);
        return res;
    }
};