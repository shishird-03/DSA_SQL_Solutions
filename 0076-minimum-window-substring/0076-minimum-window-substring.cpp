class Solution {
public:
    string minWindow(string s, string t) {
        int hash[256] = {0};

        for(char c : t)
            hash[c]++;

        int left = 0, right = 0;
        int count = 0;
        int minLen = INT_MAX;
        int start = -1;
        while(right < s.size()) {
            if(hash[s[right]] > 0)
                count++;
            hash[s[right]]--;
            while(count == t.size()) {
                if(right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }
                hash[s[left]]++;
                if(hash[s[left]] > 0)
                    count--;
                left++;
            }
            right++;
        }
        return start == -1 ? "" : s.substr(start, minLen);
    }
};