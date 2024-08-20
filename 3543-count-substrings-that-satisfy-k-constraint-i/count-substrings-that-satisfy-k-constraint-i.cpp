class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int zerocount = 0;
        int onecount = 0;
        int sub = 0;
        int left = 0;

        for (int right = 0; right < s.size(); right++) {
            if (s[right] == '0') {
                zerocount++;
            } else if (s[right] == '1') {
                onecount++;
            }

            // Shrink the window until both `0` and `1` counts are <= k
            while (zerocount > k && onecount > k) {
                if (s[left] == '0') {
                    zerocount--;
                } else if (s[left] == '1') {
                    onecount--;
                }
                left++;  // Shrink from the left
            }

            // All substrings from `left` to `right` are valid
            sub += (right - left + 1);
        }

        return sub;
    }
};
