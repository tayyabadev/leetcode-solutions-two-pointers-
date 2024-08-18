class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int wordIndex = 1;  // Index to track the word number
        int start = 0;      // Start index of the current word

        while (start < sentence.size()) {
            int end = start;

            // Move end to the end of the current word
            while (end < sentence.size() && sentence[end] != ' ') {
                end++;
            }

            // Check if the current word starts with searchWord
            if (end - start >= searchWord.size() && sentence.substr(start, searchWord.size()) == searchWord) {
                return wordIndex;
            }

            // Move to the next word
            start = end + 1; // Skip the space
            wordIndex++;
        }

        return -1;  // Return -1 if searchWord is not a prefix of any word
    }
};

