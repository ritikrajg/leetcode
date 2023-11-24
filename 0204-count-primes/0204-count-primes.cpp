class Solution {
public:
    int countPrimes(int n) {
        vector<bool> a(n+1,true);
        a[0]=a[1]=false;
        int count=0;
        for(int i=2;i<n;i++){
            if(a[i]){
                count++;
                for(int j=2*i;j<n;j=j+i){
                    a[j]=false;
                }
            }
        }
        return count;
    }
};