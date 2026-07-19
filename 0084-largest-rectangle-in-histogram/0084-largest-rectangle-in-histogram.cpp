class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> ns(n);
        vector<int> ps(n);
        stack<int> st1;
        stack<int> st2;
        for(int i = 0;i<n;i++){
             while(!st1.empty() && heights[st1.top()]>=heights[i]){
                st1.pop();
             } 
             if(st1.empty()) ps[i] = -1;
             else{
                ps[i] = st1.top();
             }
             st1.push(i);
        }
         for(int i = n-1;i>=0;i--){
             while(!st2.empty() && heights[st2.top()]>=heights[i]){
                st2.pop();
             } 
             if(st2.empty()) ns[i] = n;
             else{
                ns[i] = st2.top();
             }
             st2.push(i);
        }
        int maxi = INT_MIN;
        for(int i = 0;i<n;i++){
           int width = ns[i]-ps[i]-1;
           int area = heights[i]*width;
           maxi = max(maxi,area);
        }
        return maxi;
            }
};