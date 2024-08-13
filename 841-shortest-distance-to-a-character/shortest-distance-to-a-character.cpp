class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> result(s.size(), 0);
        int pos=-10000;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == c) {
                pos = i;
            }
            result[i] = abs(i - pos);
        }
        for (int i = pos - 1; i >= 0; i--) {
            if (s[i] == c) {
                pos = i;
            }
            result[i] = min(result[i], abs(i - pos));
        }
        return result;
    }
};