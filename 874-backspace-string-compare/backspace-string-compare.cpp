class Solution {
public:
  string compare(string s) {
            string check = "";
            int count = 0;
            for (int i = s.size() - 1; i >= 0; i--) {
                if (s[i] == '#') {
                    count++;
                    continue;
                }
                if (count > 0) {
                    count--;
                } else {
                    check += s[i];
                }
            }return check;
        }
    bool backspaceCompare(string s, string t) {
      return compare(s)==compare(t);
        
    }
};