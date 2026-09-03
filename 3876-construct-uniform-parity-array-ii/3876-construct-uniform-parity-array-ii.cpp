class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        
        int n = nums1.size();
        bool hasOdd = false, hasEven = false;
        int minOdd = INT_MAX, minEven = INT_MAX;
        
        for (int x : nums1) {
            if (x % 2 == 1) {
                hasOdd = true;
                minOdd = min(minOdd, x);
            } else {
                hasEven = true;
                minEven = min(minEven, x);
            }
        }
        
        // t0: all-even is achievable ONLY if there are no odd numbers at all.
        // (An odd number can never become even: odd - anything is either
        // odd or negative, so every single odd must be absent.)
        bool t0 = !hasOdd;
        
        // t1: all-odd is achievable if there are no even numbers at all,
        // OR if the smallest odd number is less than the smallest even number
        // (so every even can do even - minOdd = odd, and minOdd stays as-is).
        bool t1 = !hasEven || (minOdd < minEven);
        
        // We need EITHER target to work — never gated by which parity
        // has more elements, since count has nothing to do with achievability.
        return t0 || t1;
    
        
    }
};