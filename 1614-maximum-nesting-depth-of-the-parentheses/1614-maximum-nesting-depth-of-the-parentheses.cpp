class Solution {
public:
    int maxDepth(string s) {
        stack<int> st;
        int maxi = 0;
        int n =  s.size();
        for(int i = 0;i<n;i++){
            if(s[i]==')'){
               st.pop();
            }
            if(s[i]=='('){
                st.push(1);
            }
            maxi = max(maxi,(int)st.size()); 
        }
        return maxi;
    }
};