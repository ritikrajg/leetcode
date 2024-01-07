class Solution {
public:
    bool check(vector<int> &arr,int s,int e){
        if(s>e){
            return true;
        }
        if(arr[s]!=arr[e]){
           return false;
            }
        return check(arr,s+1,e-1);
    }
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        if(x==0){
            return true;
        }
       vector<int> a;
        while(x!=0){
            int y=x%10;
            a.push_back(y);
            x=x/10;
        }
        return check(a,0,a.size()-1);
    }
};