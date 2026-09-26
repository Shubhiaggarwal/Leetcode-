class Solution {
public:
    vector<int> diStringMatch(string s) {
       // vector<int> arr;
        vector<int> res;
        int n = s.size();
        
        int i  = 0;
        int j = n;
        for(int k=0;k<s.size();k++){
            if(s[k]=='I'){
                res.push_back(i);
                i++;
            }
            if(s[k]=='D'){
                res.push_back(j);
                j--;
            }
        }
        while(i<=j){
            res.push_back(i);
            i++;
        }
        return res;
    }
};