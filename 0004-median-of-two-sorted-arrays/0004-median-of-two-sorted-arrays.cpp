class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int n = nums1.size();
        int m = nums2.size();

        vector<int> arr;
        int k = n + m;

        int p, l;

        if (k % 2 == 0) {
            p = k / 2 - 1;
            l = k / 2;
        } else {
            p = k / 2;
        }

        int i = 0;
        int j = 0;

        while (i < n && j < m) {

            if (nums1[i] < nums2[j]) {
                arr.push_back(nums1[i]);
                i++;
            } else {
                arr.push_back(nums2[j]);
                j++;
            }
        }

        while (i < n) {
            arr.push_back(nums1[i]);
            i++;
        }

        while (j < m) {
            arr.push_back(nums2[j]);
            j++;
        }

        if (k % 2 == 0) {
            return (arr[p] + arr[l]) / 2.0;
        } else {
            return arr[p];
        }
    }
};