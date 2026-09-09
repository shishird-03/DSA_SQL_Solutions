class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();

        // Case 1: all uppercase
        if (word[0] >= 'A' && word[0] <= 'Z') {
            bool allUpper = true;
            for (int i = 1; i < n; i++) {
                if (word[i] >= 'a' && word[i] <= 'z')
                    allUpper = false;
            }

            if (allUpper) return true;

            // Case 2: first uppercase, rest lowercase
            for (int i = 1; i < n; i++) {
                if (word[i] >= 'A' && word[i] <= 'Z')
                    return false;
            }
            return true;
        }

        // Case 3: all lowercase
        for (char c : word) {
            if (c >= 'A' && c <= 'Z')
                return false;
        }

        return true;
    }
};