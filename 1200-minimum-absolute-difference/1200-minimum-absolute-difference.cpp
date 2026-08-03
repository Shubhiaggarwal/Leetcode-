class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int mini = INT_MAX;
        for(int i = 0;i<n-1;i++){
            mini = min(mini , arr[i+1]-arr[i]);
        }
        unordered_map<int,int> mp;
        for(int i = 0;i<n;i++){
            mp[arr[i]]++;
        }
        vector<vector<int>> res;
        for(int i =0 ;i<n;i++){
            vector<int> p;
            if(mp.contains(arr[i]-mini)){
                 p.push_back(arr[i]-mini);
                p.push_back(arr[i]);
                res.push_back(p);
            }
           
        }
        return res;
    }
};