class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;
        int n=matrix.size();
        int m= matrix[0].size();
        int low=0;
        int high=m-1;
        while(low<n &&high>=0){
            if(matrix[low][high]==target ){
                return true;
            }
            else if (matrix[low][high]<target){
                low++;
            }
            else{
                high--;
            }
        }
        return false;
    }
};