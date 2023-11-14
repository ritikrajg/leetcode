class Solution {
public:
    
    string removeOccurrences(string s, string p) {
        
        
        while(s.find(p)!=-1){
            int pos=s.find(p);
            s.erase(pos,p.size());
        }
        return s;
    }
};