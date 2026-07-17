class Solution {
public:
    bool isPalindrome(string s) {
        string st = "";
        if(s == " "){
            return true;
        }
        for(int i = 0;i<s.size();i++){
            if(isalnum(s[i])){
                st += tolower(s[i]);
            }
        }
        string st2 = st;
        reverse(st2.begin(),st2.end());
        if (st == "") return true;
        if(st == st2){
            return true;
        }
        return false;
    }
};