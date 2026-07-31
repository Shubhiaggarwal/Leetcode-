class Solution {
public:
    bool solve(const vector<int>& arr, int target, int l, int r){

        while(l <= r){

            int mid = l + (r-l)/2;

            if(arr[mid] == target)
                return true;

            else if(arr[mid] < target)
                l = mid + 1;

            else
                r = mid - 1;
        }

        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int n = matrix.size();
        int m = matrix[0].size();

        int top = 0;
        int bottom = n - 1;

        while(top <= bottom){

            int mid = top + (bottom - top)/2;

            if(target < matrix[mid][0]){
                bottom = mid - 1;
            }

            else if(target > matrix[mid][m-1]){
                top = mid + 1;
            }

            else{
                return solve(matrix[mid], target, 0, m - 1);
            }
        }

        return false;
    }
};