class Solution {
public:
    int nextGreaterElement(int n) {
        //int m = n;
        vector<int> arr;
        
        
        while(n>0){
            int k = n%10;
            arr.push_back(k);
            n = n/10;
        }
        int p = -1 ,q  = -1;
        reverse(arr.begin(),arr.end());
        for(int i = arr.size()-2;i>=0;i--){
            if(arr[i]< arr[i+1]){
                  
                  p = i;
                  break;
            }
          
        }
        if(p == -1){
            return -1;
        }
        for(int i = arr.size()-1;i>p;i--){
            if(arr[i]>arr[p]){
            q = i ;
            break;
        }}
swap(arr[p],arr[q]);
reverse(arr.begin()+p+1 ,arr.end());
long long m = 0;
    for(int i = 0;i<arr.size();i++){
        m = m*10+arr[i];
    }
    if(m >INT_MAX)
    return -1;
         return (int)m;
    }
};