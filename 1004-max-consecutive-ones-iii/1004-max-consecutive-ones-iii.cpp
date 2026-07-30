class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n= nums.size();
        int zeros=0;
        int maxLen=0, left=0, right=0;
        int len=0;
        while(right<n){
            if(nums[right]==0){
            zeros++;
            }
            if(zeros>k){
                if(nums[left]==0)
                zeros--;
                left++;
            }
            if(zeros<=k)
         len= right-left+1;
            maxLen=max(maxLen,len);
            right++;
        }
        return maxLen;
        
    }
};