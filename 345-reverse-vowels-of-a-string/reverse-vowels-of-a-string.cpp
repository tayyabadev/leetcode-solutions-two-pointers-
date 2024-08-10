class Solution {
public:
    string reverseVowels(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            while (left < right &&
                   (s[right] != 'a' && s[right] != 'e' && s[right] != 'i' &&
                    s[right] != 'o' && s[right] != 'u' && s[right] != 'A' &&
                    s[right] != 'E' && s[right] != 'I' && s[right] != 'O' &&
                    s[right] != 'U')) {
                right--;
            }
            while (left < right &&
                   (s[left] != 'a' && s[left] != 'e' && s[left] != 'i' &&
                    s[left] != 'o' && s[left] != 'u' && s[left] != 'A' &&
                    s[left] != 'E' && s[left] != 'I' && s[left] != 'O' &&
                    s[left] != 'U')) {
                left++;
            }
           
             if (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};