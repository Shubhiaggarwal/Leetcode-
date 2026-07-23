class Solution {
public:
    int trailingZeroes(int n) {
        int cnt = 0;
        while(n>0){
            int p = n/5;
            cnt += p;
            n = n/5;
        }
        return cnt;
    }
};