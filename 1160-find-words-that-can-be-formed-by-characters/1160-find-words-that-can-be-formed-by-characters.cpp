class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> mp;

        for (char ch : chars) {
            mp[ch]++;
        }

        int ans = 0;

        for (int i = 0; i < words.size(); i++) {
            string str = words[i];
            unordered_map<char, int> mp2 = mp;

            bool possible = true;

            for (int j = 0; j < str.size(); j++) {
                if (mp2.find(str[j]) == mp2.end() || mp2[str[j]] == 0) {
                    possible = false;
                    break;
                }

                mp2[str[j]]--;
            }

            if (possible) {
                ans += str.size();
            }
        }

        return ans;
    }
};