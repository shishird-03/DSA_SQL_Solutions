class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n= nums.size();
        unordered_map<int,int>counts;
        for(int num: nums){
            counts[num]++;
        }
        vector<pair<int, int>> v;
        for (auto &p :counts)
            v.push_back({p.second, p.first});

        sort(v.rbegin(), v.rend());

        vector<int> ans;

        for (int i = 0; i < k; i++)
            ans.push_back(v[i].second);

        return ans;

    }
};