class Solution {
public:
    int minOperations(vector<int>& nums) {

        int n = nums.size();

        // Find position of 0
        int zero = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                zero = i;
                break;
            }
        }

        // Check whether numbers increase
        // by moving 'step' positions around the circle
        auto check = [&](int step) {

            for (int i = 1; i < n; i++) {

                int prev = (zero + (i - 1) * step + n) % n;
                int curr = (zero + i * step + n) % n;

                if (nums[prev] > nums[curr])
                    return false;
            }

            return true;
        };

        int ans = INT_MAX;

        // Case 1: Increasing to the right
        if (check(1)) {

            // Rotate left 'zero' times
            ans = min(ans, zero);

            // Reverse -> rotate -> reverse
            ans = min(ans, n - zero + 2);
        }

        // Case 2: Increasing to the left
        if (check(-1)) {

            // Rotate -> reverse
            ans = min(ans, zero + 2);

            // Reverse -> rotate
            ans = min(ans, n - zero);
        }

        return ans == INT_MAX ? -1 : ans;
    }
};