class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int size = s.size();
        vector<int>arr;
        int pos =INT_MAX;
        for (int i = 0; i < size; i++) {
            if (s[i] == c) {
                pos = i;
            }
            arr.push_back(abs(pos - i));
        }
        for (int i = pos; i >= 0; i--) {
            if (s[i] == c) {
                pos = i;
            }
            arr[i] = min(arr[i], abs(pos - i));
        }
        return arr;
    }
};