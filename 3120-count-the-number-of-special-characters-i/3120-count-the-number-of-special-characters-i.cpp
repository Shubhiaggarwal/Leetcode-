class Solution {
public:
    int numberOfSpecialChars(string word) {

        unordered_map<char,int> mp;
        set<char> st;

        for(char ch : word)
        {
            mp[ch]++;
        }

        for(char ch : word)
        {
            if(ch >= 'a' && ch <= 'z')
            {
                if(mp.count(toupper(ch)))
                {
                    st.insert(ch);
                }
            }
        }

        return st.size();
    }
};