class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0,l=matrix.size();
        while(i<l){
            int s=0,e=matrix[i].size()-1;
            while(s<=e){
                int mid=s+(e-s)/2;
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