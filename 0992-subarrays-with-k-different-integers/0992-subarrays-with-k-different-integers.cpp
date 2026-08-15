class Solution {
public:
    int function1(vector<int>& nums, int k){
       int left=0, right=0, count=0;
       unordered_map<int,int> mpp;
       while(right<nums.size()){
        mpp[nums[right]]++;
        while(mpp.size()>k){
            mpp[nums[left]]--;
            if(mpp[nums[left]]==0)
            mpp.erase(nums[left]);
            left++;
        }
        count=count+(right-left+1);
        right=right+1;
       }
       return count;
    }

     int function2(vector<int>& nums, int k){
       int left=0, right=0, count=0;
       unordered_map<int,int> mpp;
       while(right<nums.size()){
        mpp[nums[right]]++;
        while(mpp.size()>k){
            mpp[nums[left]]--;
            if(mpp[nums[left]]==0)
            mpp.erase(nums[left]);
            left++;
        }
        count+=(right-left+1);
        right=right+1;
       }
       return count;
    }
int subarraysWithKDistinct(vector<int>& nums, int k) {
    return function1(nums, k) - function2(nums, k - 1);
    }
};