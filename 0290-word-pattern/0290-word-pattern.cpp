class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, string> mp;
        map<string, char> mp1;

        int j = 0;
        int n = s.length();

        for (int i = 0; i < pattern.length(); i++) {
            if (j >= n)
                return false;

            string word = "";

            while (j < n && s[j] != ' ') {
                word += s[j];
                j++;
            }

            char ch = pattern[i];

            if (mp.count(ch) && mp[ch] != word)
                return false;

            if (mp1.count(word) && mp1[word] != ch)
                return false;

            mp[ch] = word;
            mp1[word] = ch;

            j++;
        }

       
        if (j < n)
            return false;

        return true;
    }
};