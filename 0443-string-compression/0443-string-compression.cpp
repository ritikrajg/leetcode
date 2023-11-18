class Solution {
public:
    int compress(vector<char>& chars) {
        int j=1,k=0,i=0;
        if(chars.size()==1 || chars.size()==0){
            return chars.size();
        }
        
        for(i=1;i<chars.size();i++){
            if(chars[i-1]==chars[i]){
                j++;
            }
            else{
                if(j>1 && j<10){
                    chars[k]=chars[i-1];
                    k++;
                    chars[k]=j+'0';
                    k++;
                }
                else if(j>=10){
                    chars[k]=chars[i-1];
                    k++;
                    vector<int> a;
                    while(j!=0){
                        a.push_back((j%10));
                     j=j/10;
                        
                    }
                    for(int i=a.size()-1;i>=0;i--){
                        chars[k]=a[i]+'0';
                        k++;
                    }
                    
                }
                else{
                    chars[k]=chars[i-1];
                    k++;
                }
                j=1;
            }
        }
        chars[k]=chars[i-1];
        k++;
        if(j>1 && j<10){
                    chars[k]=j+'0';
            k++;
                }
        else if(j>=10){
                    vector<int> a;
                    while(j!=0){
                        a.push_back((j%10));
                     j=j/10;
                    }
            for(int i=a.size()-1;i>=0;i--){
                        chars[k]=a[i]+'0';
                        k++;
                    }
                }
      return k;
    }
};