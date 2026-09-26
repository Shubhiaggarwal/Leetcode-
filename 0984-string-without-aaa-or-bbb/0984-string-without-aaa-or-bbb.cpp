class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string str;
        int i = 0;
        int m =a;
        int n = b;
    int cnta = 1;
        while(m!=0 && m>n){
            if(cnta > 2 && n!=0){
                str.push_back('b');
                n--;
                cnta = 1;
            }
            cnta++;
          str.push_back('a');
          m--;
        }
        int cntb = 1;
        while(n!=0 && n>m){
            if(cntb > 2 && m!=0){
                str.push_back('a');
                m--;
                cntb = 1;
            }
            cntb++;
          str.push_back('b');
          n--;
        }
      while (m != 0 || n != 0) {

            if (m > 0 && n > 0) {
                  if (str.empty()) {
                    str.push_back('a');
                    m--;
                }
                 else if (str.back() == 'a') {
                    str.push_back('b');
                    n--;
                }
                else {
                    str.push_back('a');
                    m--;
                }

            }
            else if (m > 0) {
                str.push_back('a');
                m--;
            }
            else {
                str.push_back('b');
                n--;
            }
        }
       return str;
    }
};