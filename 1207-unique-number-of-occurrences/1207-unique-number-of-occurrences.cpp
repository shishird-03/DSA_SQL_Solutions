class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;
        for(int x:arr){
            mp[x]++;
        }
        set<int> st;
        for(auto x:mp){
            st.insert(x.second);
        }
        return st.size()==mp.size();
        
    }
};