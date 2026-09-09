class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        if (word[0] >= 'A' && word[0] <= 'Z') {
            bool allUpper = true;
            for (int i = 1; i < n; i++) {
                if (word[i] >= 'a' && word[i] <= 'z')
                    allUpper = false;
            }

            if (allUpper) return true;
            for (int i = 1; i < n; i++) {
                if (word[i] >= 'A' && word[i] <= 'Z')
                    return false;
            }
            return true;
        }
        for (char c : word) {
            if (c >= 'A' && c <= 'Z')
                return false;
        }

        return true;
    }
};