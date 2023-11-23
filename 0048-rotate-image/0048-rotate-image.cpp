/*class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int s=0;
        int i=0,j=0,l=matrix.size();
        int k=l-1;
        vector<int> a(l);
        vector<int> b(l);
        vector<int> c(l);
        vector<int> d(l);
       while(s<l-2){
           int n=0;
           while(n<l){
               a[n]=matrix[i][n];
               b[n]=matrix[n][j];
               c[n]=matrix[k][n];
               d[n]=matrix[n][k];
               n++;
           }
           n=0;
           int y=l-1;
           while(n<l){
               matrix[i][n]=b[y];
               matrix[n][j]=c[n];
               matrix[k][n]=d[y];
               matrix[n][k]=a[n];
               n++;
               y--;
           }
           s++;
           i++;
           j++;
           l--;
       }
    }
};
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int s = 0;
        int i = 0, j = 0, l = matrix.size();
        int k = l - 1;
        vector<int> a(l);
        vector<int> b(l);
        vector<int> c(l);
        vector<int> d(l);
        while (s < l / 2) {
            int n = 0;
            while (n < l) {
                a[n] = matrix[i][n];
                b[n] = matrix[n][j];
                c[n] = matrix[k][n];
                d[n] = matrix[n][k];
                n++;
            }
            n = 0;
            int y = l - 1;
            while (n < l) {
                matrix[i][n] = b[y];
                matrix[n][j] = c[n];
                matrix[k][n] = d[y];
                matrix[n][k] = a[n];
                n++;
                y--;
            }
            s++;
            i++;
            j++;
            k--;
            l--;
        }
    }
};*/
class Solution{
    public:
    void rotate(vector<vector<int>>& matrix){
        int l=matrix.size();
        vector<vector<int>> a(l,vector<int>(l,0));
        vector<int> b(l);
        int j=l-1,k=0;
        while(k<matrix.size()){
        for(int i=0;i<l;i++){
            b[i]=matrix[i][j];
        }
        for(int i=0;i<l;i++){
            matrix[i][j]=matrix[k][i];
        }
            int m=l-1;
        for(int i=0;i<l;i++){
            
            a[j][i]=b[m];
            m--;
        }
        j--;
        k++;
    }
        for(int i=0;i<l;i++){
            for(int j=0;j<l;j++){
                matrix[i][j]=a[i][j];
            }
        }
    }
};