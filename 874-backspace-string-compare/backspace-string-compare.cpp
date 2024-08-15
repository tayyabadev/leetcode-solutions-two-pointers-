class Solution {
public:
    bool backspaceCompare(string s, string t) {
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
                check+=s[i];
            }
        }
        count = 0;
        string check2 = "";
        for (int i = t.size() - 1; i >= 0; i--) {
            if (t[i] == '#') {
                count++;
                continue;
            }
            if (count > 0) {
                count--;
            } else {
                check2+=t[i];
            }
        }return check==check2;
    }
};