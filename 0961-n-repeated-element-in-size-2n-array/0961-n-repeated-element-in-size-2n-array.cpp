class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int , int> mp;
        int m = nums.size();
        int n = m/2;
        for(int num : nums){
            mp[num]++;

        }
        for(auto ch:mp){
            if(ch.second == n){
                return ch.first;
            }
        }
        return -1;
    }
};