class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0;
        int j = n-1;
        int maxi = 0;
        int area = 0;
        while(i<j){
            int weight = min(height[i],height[j]);
            area = weight*(j-i);
            if(height[i]<height[j]){
                i++;
            }
            
            else{
                
                j--;
            }
            maxi = max(area, maxi);
        }
         return maxi;
    }
};