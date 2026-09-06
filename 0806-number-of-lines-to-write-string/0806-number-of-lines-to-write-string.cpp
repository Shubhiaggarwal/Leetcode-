class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int cnt = 1;   // At least one line
        int num = 0;   // Width of current line

        for (char c : s) {
            int w = widths[c - 'a'];

            if (num + w > 100) {
                cnt++;
                num = w;
            } 
            else {
                num += w;
            }
        }

        return {cnt, num};
    }
};