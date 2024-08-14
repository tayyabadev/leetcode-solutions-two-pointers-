class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> answer;
        int size = s.size();
        int pos = size + 1;
        for (int i = 0; i < size; i++) {
            if (s[i] == c) {
                pos = i;
            }
            answer.push_back(abs(pos-i));
        }
        for (int i = size-1; i >= 0; i--) {
            if (s[i] == c) {
                pos = i;
            }
            answer[i]=min(answer[i],abs(pos-i));
        }
        return answer;
    }
};