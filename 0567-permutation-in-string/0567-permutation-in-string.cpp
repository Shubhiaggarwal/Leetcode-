class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> mp;
        int i = 0;
        int j = 0;
        int n = s2.size();
        int k = s1.size();
        for(auto ch:s1){
            mp[ch]++;
        }
        int cnt =mp.size();
        while(j<n){
            if(mp.find(s2[j]) != mp.end()){
                mp[s2[j]]--; 
                if(mp[s2[j]] == 0){
                    cnt--;
                }
                
            }
            if(j-i+1 <k) j++;
        else if(j-i+1 == k ){
            if(cnt == 0)
        return true;

        
        if(mp.find(s2[i])!= mp.end()){
            
                if(mp[s2[i]] == 0){
                    cnt++;
                }
                mp[s2[i]]++;
            }
            
         i++;
        j++;
        }}
        return false;
        
    }
};