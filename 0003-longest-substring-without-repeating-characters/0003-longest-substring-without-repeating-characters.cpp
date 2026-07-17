class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i=0;int j = 0;
        unordered_map<char,int> mp;
        int cnt = 0;
        while(j<n){
           while(mp.contains(s[j])){
            i++;
            mp.erase(s[i-1]);
           }
           
            mp[s[j]]++;
           
           j++;
          cnt = max(cnt , j-i);
        }
        return cnt;
    }
};