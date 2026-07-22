class Solution {
public:

    // Function to find Next Smaller Element (NSE)
    vector<int> findNSE(vector<int>& arr) {
        int n = arr.size();
        vector<int> nse(n);      // stores index of next smaller element
        stack<int> st;

        // Traverse from right to left
        for(int i = n - 1; i >= 0; i--) {

            // Pop elements greater than or equal to current
            while(!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }

            // If stack empty → no smaller element → n
            nse[i] = st.empty() ? n : st.top();

            // Push current index
            st.push(i);
        }

        return nse;
    }

    // Function to find Previous Smaller or Equal Element (PSEE)
    vector<int> findPSEE(vector<int>& arr) {
        int n = arr.size();
        vector<int> psee(n);     // stores index of previous smaller element
        stack<int> st;

        // Traverse from left to right
        for(int i = 0; i < n; i++) {

            // Pop elements strictly greater than current
            while(!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }

            // If stack empty → no previous smaller → -1
            psee[i] = st.empty() ? -1 : st.top();

            // Push current index
            st.push(i);
        }

        return psee;
    }

    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();

        vector<int> nse = findNSE(arr);
        vector<int> psee = findPSEE(arr);

        long long total = 0;
        int mod = 1e9 + 7;

        // Contribution technique
        for(int i = 0; i < n; i++) {

            // Distance to left (how many subarrays where arr[i] is min)
            long long left = i - psee[i];

            // Distance to right
            long long right = nse[i] - i;

            // Contribution of arr[i]
            long long contribution = (left * right) % mod;

            total = (total + (arr[i] * contribution) % mod) % mod;
        }

        return (int)total;
    }
};