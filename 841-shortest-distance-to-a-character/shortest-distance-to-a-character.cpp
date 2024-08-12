class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int left = 0;

        vector<int> ans;
        for (int i = 0; i < s.size(); i++) {
            int dis = INT_MAX;
            int right = 0;
            while (right < s.size()) {

                if (s[right] == c) {
                    dis = min(dis, abs(right - left));
                }
                right++;
            }
            ans.push_back(dis);
            left++;
        }
        return ans;
    }
};