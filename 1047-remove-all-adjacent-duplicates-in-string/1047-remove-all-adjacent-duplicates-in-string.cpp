class Solution {
public:
    string removeDuplicates(string s) {
        int i=0;
        while(i<s.size()){
            int j=i+1;
            if(s[i]==s[j]){
                s.erase(i,1);
                s.erase(j-1,1);
               if(i>0){
                   i=i-1;
               }
            }
            else{
                i++;
            }
        }
        return s;
    }
};