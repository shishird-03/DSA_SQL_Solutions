class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int l=0;
        int maxi=0;
        int currarea=0;
        int r=n-1;
        while(l<r){
            currarea=min(height[l],height[r])*(r-l);
            maxi=max(maxi,currarea);
           if(height[l]<height[r]){
            l++;
            }
            else
            r--;
        }
        return maxi;
    }
};