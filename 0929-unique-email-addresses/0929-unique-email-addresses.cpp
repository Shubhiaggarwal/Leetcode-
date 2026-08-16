class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> st;

        for (string email : emails) {
            string local = "";
            string domain = "";

            int at = email.find('@');

            // Local part
            for (int i = 0; i < at; i++) {
                if (email[i] == '+')
                    break;

                if (email[i] != '.')
                    local += email[i];
            }

            // Domain
            domain = email.substr(at);

            st.insert(local + domain);
        }

        return st.size();
    }
};