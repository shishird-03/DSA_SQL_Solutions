class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n= nums.size();
        if (nums.size()<k)
        return 0;
        double curr_window=0;
        for(int i=0;i<k;i++){
           curr_window+=nums[i];
        }
       double max_sub=curr_window;
       for(int i=k;i<n;++i){
        curr_window=curr_window+nums[i]-nums[i-k];
        max_sub=max(max_sub,curr_window);
       }
       return max_sub/k;
    }
};