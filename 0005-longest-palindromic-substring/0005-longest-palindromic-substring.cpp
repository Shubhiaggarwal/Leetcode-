class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        string ans = "";

        for(int i = 0; i < n; i++) {
            // Odd-length palindrome
            int left = i, right = i;
            while(left >= 0 && right < n && s[left] == s[right]) {
                if(right - left + 1 > ans.size()) {
                    ans = s.substr(left, right - left + 1);
                }
                left--;
                right++;
            }

            // Even-length palindrome
            left = i; right = i + 1;
            while(left >= 0 && right < n && s[left] == s[right]) {
                if(right - left + 1 > ans.size()) {
                    ans = s.substr(left, right - left + 1);
                }
                left--;
                right++;
            }
        }

        return ans;
    }
};