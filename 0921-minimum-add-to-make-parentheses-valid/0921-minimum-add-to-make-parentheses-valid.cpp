class Solution {
public:
    int minAddToMakeValid(string s) {
        int opening=0;
        int add=0;
         for (char ch : s) {
            if (ch == '(') {
                opening++;
            } else {
                if (opening > 0) {
                    opening--;
                } else {
                    add++;
                }
            }
        }

        return opening + add;
    }
};