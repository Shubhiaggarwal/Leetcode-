class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ng(n);
        stack<int> st;
        for(int i = n-1;i>=0;i--){
           while(!st.empty() && temperatures[st.top()]<=temperatures[i]){
                st.pop();
           }
           if(st.empty()) ng[i] = -1;
           else{
            ng[i] = st.top();
           }
           st.push(i);
        }
        vector<int> res(n);
        for(int i = 0;i<n;i++){
            if(ng[i] == -1) res[i] = 0;
            else
            res[i] = ng[i]-i;
        }
        return res;
    }
};