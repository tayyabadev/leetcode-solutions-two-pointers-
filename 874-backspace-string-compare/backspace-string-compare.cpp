class Solution {
public:
    string check(string s) {
        string first = "";
        int count = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '#') {
                count++;
                continue;
            }
            if (count > 0) {
                count--;
            } else {
                first += s[i];
            }
        }
        return first;
    }
    bool backspaceCompare(string s, string t) { return check(s) == check(t); }
};