class Solution {
public:
    vector<string> res;
    int n;

    bool valid(string str) {
        if (str.size() > 1 && str[0] == '0')
            return false;

        int val = stoi(str);
        return val <= 255;
    }

    void solve(string s, int idx, int part, string curr) {
        if (part == 4 && idx == n) {
            res.push_back(curr.substr(0, curr.size() - 1)); // Remove last '.'
            return;
        }

        if (part >= 4)
            return;

        if (idx + 1 <= n) {
            solve(s, idx + 1, part + 1,
                  curr + s.substr(idx, 1) + ".");
        }

        if (idx + 2 <= n && valid(s.substr(idx, 2))) {
            solve(s, idx + 2, part + 1,
                  curr + s.substr(idx, 2) + ".");
        }

        if (idx + 3 <= n && valid(s.substr(idx, 3))) {
            solve(s, idx + 3, part + 1,
                  curr + s.substr(idx, 3) + ".");
        }
    }

    vector<string> restoreIpAddresses(string s) {
        n = s.size();

        if (n > 12)
            return res;

        solve(s, 0, 0, "");

        return res;
    }
};