class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int n = numbers.size();
       vector<int> result;
       unordered_map<int,int> mp;
       for(int i= 0;i<n;i++){
        
        mp[numbers[i]] = i+1;
       } 
       for(int i = 0;i<n;i++){
           if(mp.contains(target-numbers[i]))  {
            int p = mp[target-numbers[i]];
            if(p != i){
                result.push_back(i+1);
                result.push_back(p);
                break;
            }
           }
       }
       return result;
    }
};