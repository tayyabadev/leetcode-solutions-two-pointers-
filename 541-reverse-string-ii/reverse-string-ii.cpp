class Solution {
public:
    string reverseStr(string s, int k) {
         int n = s.size();
         
        for (int start = 0; start < n; start += 2 * k) {
            int left = start;
            int right = min(start + k - 1,
                            n - 1); // Reverse only up to the end of the string

            // Reverse the first k characters in the current chunk
            while (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};