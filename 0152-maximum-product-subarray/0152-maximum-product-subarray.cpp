class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxi=nums[0];
        int mini=nums[0];
        int answer=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<0)
            swap(maxi,mini);
            maxi =max(nums[i], maxi * nums[i]);
            mini=min(nums[i],mini*nums[i]);
            answer=max(answer,maxi);
        }
        return answer;
    }
};