class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
         if (n == 0) return 0;
        vector<int> pg(n);
        vector<int> ng(n);
        pg[0] = height[0];
        for(int i= 1;i<n;i++){
            pg[i]= max(pg[i-1],height[i]);
        }
        ng[n-1]= height[n-1];
        for(int i = n-2;i>=0;i--){
            ng[i] = max(ng[i+1],height[i]);
        }
        int sum = 0;
        for(int i = 0;i<n;i++){
            int h = min(pg[i],ng[i]);
            int area = h - height[i];
            sum += area;
        }
        return sum;
    }
};