class Solution {
public:
    int smallestNumber(int n, int t) {
        while (true) {
            int p = 1;
            int x = n;

            while (x) {
                p *= x % 10;
                x /= 10;
            }

            if (p % t == 0)
                return n;

            n++;
        }
    }
};