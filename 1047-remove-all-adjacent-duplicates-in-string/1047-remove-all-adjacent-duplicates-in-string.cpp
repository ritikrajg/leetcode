class Solution {
public:
    string removeDuplicates(string s) {
        /*int i=0;
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
        return s;*/
        stack<char> a;
        for(int it=s.size()-1;it>=0;it--){
            if(!a.empty()){
                if(s[it]==a.top()){
                   a.pop();
                }
                else{
                    a.push(s[it]);
                }
            }
            else{
                a.push(s[it]);
            }
        }
        s.erase();
        while(!a.empty()){
            s.push_back(a.top());
            a.pop();
        }
        return s;
    }
};