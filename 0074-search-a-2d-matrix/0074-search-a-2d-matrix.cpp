class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=matrix.size(),i=0;
        while(i<l){
            int s=0,e=matrix[i].size()-1;
            while(s<=e){
                int mid=(s+e)/2;
                if(matrix[i][mid]==target){
                    return true;
                }
                else if(matrix[i][mid]<target){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
            i++;
        }
        return false;
    }
};