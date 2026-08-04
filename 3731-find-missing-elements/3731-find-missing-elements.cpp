class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        int a = *min_element(nums.begin(),nums.end());
        int b = *max_element(nums.begin(),nums.end());
        vector<int> res;
        set<int> mp;
        for(auto ch:nums){
            mp.insert(ch);
        }
        for(int i = a ; i<=b;i++){
            if(!mp.contains(i)){
                res.push_back(i);
            }
        }
        return res;
    }
};