class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size(), pos = -n;
        vector<int> res(n, 0);
        for (int i = 0; i < n; ++i) {
            if (s[i] == c){
                pos = i;}
            res[i] = i - pos;
        }
        for (int i = pos - 1; i >= 0; --i) {
            if (s[i] == c)
                pos = i;
            res[i] = min(res[i], pos - i);
        }
        return res;
    }
};