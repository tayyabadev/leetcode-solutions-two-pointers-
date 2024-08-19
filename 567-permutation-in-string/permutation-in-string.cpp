class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> s1map;
        for (char c : s1) {
            s1map[c]++;
        }
        if (s1.size() > s2.size()) return false;
        int right = s1.size() - 1;
        unordered_map<char, int> temp;
        for (int i = 0; i <= right; i++) {
            temp[s2[i]]++;
        }
        for (int i = 0; i <= s2.size() - s1.size(); i++) {
            if (s1map == temp) {
                return true;
            } else {
                if (i + s1.size() < s2.size()) {
                    temp[s2[i]]--;
                    if (temp[s2[i]] == 0) {
                        temp.erase(s2[i]);
                    }
                    
                    temp[s2[i+s1.size()]]++;
                }
            }
        }
        return false;
    }
};

