class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int ,int> mp;
        for(auto ch:nums){
            mp[ch]++;
        }
        vector<int> arr;
        for(auto it: mp){
            arr.push_back(it.second);
        }
        vector<int> result;
        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());
        for(int i = 0;i<k;i++){
            for(auto kt:mp){
                if(kt.second == arr[i]){
                    result.push_back(kt.first);
                    mp[kt.first] = 0;
                }
            }
        }
        return result;
    }
};