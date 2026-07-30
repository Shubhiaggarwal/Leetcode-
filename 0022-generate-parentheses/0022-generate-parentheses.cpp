class Solution {
public:
vector<string> result;
    void solve(int n , string str, int open , int close){
        if(str.size()==2*n){
            result.push_back(str);
            return ;
        }
        if(open<n){
             str += "(";
             solve(n, str , open+1 , close);
             str.pop_back();
        }
        if(close<open){
            str += ")";
            solve(n,str,open , close+1);
            str.pop_back();
        }

    }
    vector<string> generateParenthesis(int n) {
        solve(n,"",0,0);
        return result;
    }
};