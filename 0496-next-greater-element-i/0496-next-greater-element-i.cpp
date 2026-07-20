class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int, int> mp;

        for(int i = nums2.size() - 1; i >= 0; i--) {
            int curr = nums2[i];

            while(!st.empty() && st.top() <= curr)
                st.pop();

            if(st.empty())
                mp[curr] = -1;
            else
                mp[curr] = st.top();

            st.push(curr);     // Always push
        }

        vector<int> ans;
        for(int num : nums1)
            ans.push_back(mp[num]);

        return ans;           
    }
};