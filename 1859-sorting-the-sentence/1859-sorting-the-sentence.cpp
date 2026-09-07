class Solution {
public:
    string sortSentence(string s) {
        int n = s.size();
        string word = "";
        vector<string> ans(10);
        for(int i= 0;i<=n;i++){
            if(i==n || s[i]==' '){
               int pos = word.back()-'0';
               word.pop_back();
               ans[pos] = word;
               word ="";
            }
            else{
                word += s[i];
            }
        }
           string result = "";

        for (int i = 1; i < ans.size(); i++) {
            if (ans[i] != "") {
                if (result != "")
                    result += " ";

                result += ans[i];
            }
        }

        return result;
    
    }
};