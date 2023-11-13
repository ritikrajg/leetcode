class Solution {
public:
      string reverse(string r){
        string s;
        int j=r.size()-1;
        if(r.size()==1){return r;}
        for(int i=r.size()-1;i>=0;i--){
            if(i==0){
                for(int k=0;k<=j;k++){
                    s.push_back(r[k]);
                }
            }
            else if(r[i]==' '){
                for(int k=i+1;k<=j;k++){
                    s.push_back(r[k]);
                }
                s.push_back(' ');
                j=i-1;
            }
        }
        return s;
    }
    string valid(string s){
        string r;
         for(int i=0;i<s.size();i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
                r.push_back(s[i]);
                if(s[i+1]==' '){
                    r.push_back(' ');
                }
            }
            
        }
        if(r[r.size()-1]==' '){
            r.pop_back();
        }
        return reverse(r);
    }
  
    string reverseWords(string s) {
        return valid(s);
       
    }
};