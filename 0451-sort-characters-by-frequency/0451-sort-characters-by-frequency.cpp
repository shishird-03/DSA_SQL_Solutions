class Solution {
private:
    static bool comparator(pair<int, char> p1,
                           pair<int, char> p2) {
        if (p1.first > p2.first) return true;
        if (p1.first < p2.first) return false;
        return p1.second < p2.second;
    }

public:
    string frequencySort(string s) {
        pair<int, char> freq[128];

        for (int i = 0; i < 128; i++) {
            freq[i] = {0, char(i)};
        }

        for (char c : s) {
            freq[(unsigned char)c].first++;
        }

        sort(freq, freq + 128, comparator);

        string ans;

        for (int i = 0; i < 128; i++) {
            while (freq[i].first > 0) {
                ans.push_back(freq[i].second);
                freq[i].first--;
            }
        }

        return ans;
    }
};