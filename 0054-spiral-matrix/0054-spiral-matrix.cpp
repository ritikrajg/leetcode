class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int sizeofmatrix=0;
        vector<int> a;
        int i=0,j=0,k=matrix.size(),l=matrix[i].size(),m=0;
        int s=matrix.size()*matrix[i].size();
       while(sizeofmatrix<s){
            for(;j<l;j++){
                a.push_back(matrix[i][j]);
                sizeofmatrix++;
            }
           if(sizeofmatrix>=s){
               break;
           }
           j--;
           for(i=i+1;i<k;i++){
               a.push_back(matrix[i][j]);
               sizeofmatrix++;
           }
           if(sizeofmatrix>=s){
               break;
           }
           i--;
           for(j=j-1;j>=0+m ;j--){
               a.push_back(matrix[i][j]);
               sizeofmatrix++;
           }
           if(sizeofmatrix>=s){
               break;
           }
           j++;
           for(i=i-1;i>=0+1+m ;i--){
               a.push_back(matrix[i][j]);
               sizeofmatrix++;
           }
           if(sizeofmatrix>=s){
               break;
           }
           i=i+1;
           j=j+1;
           l=l-1;
           k=k-1;
           m++;
        }
        return a;
    }
};