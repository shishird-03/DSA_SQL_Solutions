class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int a=s.length();
        for (int len = 1; len <= a / 2; len++) {
            if (a % len != 0)
                continue;
            bool flag = true;
            for (int i = len,  j = 0; i < a; i++, j++) {
                if (j == len)
                    j = 0;
                if (s[i] != s[j]) {
                    flag = false;
                    break;
                }
            }
            if (flag)
                return true;
        }
        return false;
    }
};