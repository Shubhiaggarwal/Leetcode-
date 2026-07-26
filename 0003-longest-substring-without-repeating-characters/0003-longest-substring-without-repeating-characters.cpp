class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int n = s.size();
      int left=0;
      int maxi = 0;
      int right=0;
      unordered_set<char> st;
      int cnt = 0;
      for(int i = 0;i<n ;i++){
        while(!st.empty() && st.contains(s[i])){
            st.erase(s[left]);
            left++;
            
            

        }

        
          st.insert(s[i]);
            
            cnt = abs(i-left)+1;
        
        maxi = max(maxi,cnt);
      }  
      return maxi;
    }
};