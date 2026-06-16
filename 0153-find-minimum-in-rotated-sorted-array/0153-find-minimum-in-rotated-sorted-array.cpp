class Solution {
public:
    int findMin(vector<int>& nums) {
      int low=0;
      int high=nums.size()-1;
      int target=INT_MAX;
      while(low<=high){
        int mid=(low+high)/2;
        if(nums[low]<=nums[mid]){
            target=min(target,nums[low]);
            low=mid+1;
        }else{
            high=mid-1;
            target=min(target,nums[mid]);
        }
      }
      return target;
    }
};