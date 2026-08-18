class Solution {
public:
    string toHex(int num) {
        if (num == 0)
            return "0";

        string hex = "0123456789abcdef";
        string ans = "";

        unsigned int n = num;

        while (n > 0) {
            ans += hex[n & 15];  
            n >>= 4;             
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};