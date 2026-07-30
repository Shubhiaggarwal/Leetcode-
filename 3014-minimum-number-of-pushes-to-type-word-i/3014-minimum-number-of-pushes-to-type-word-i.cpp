class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        if (n <= 8) return n;

        int cnt = 8;
        int i = n - 8;

        if (i > 0) {
            int take = min(i, 8);
            cnt += 2 * take;
            i -= take;
        }

        if (i > 0) {
            int take = min(i, 8);
            cnt += 3 * take;
            i -= take;
        }

        if (i > 0) {
            cnt += 4 * i;
        }

        return cnt;
    }
};