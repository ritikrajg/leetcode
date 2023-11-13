//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    char max(string s){
        int k=0,l=0;
        char p;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(s[i]==s[j]){
                  k++;  
                }
            }
            if((k>l)||(k==l && s[i]<p)){
            p=s[i];
            l=k;
            }
            k=0;
        }
        
        return p;
    }
    char getMaxOccuringChar(string str)
    {
        return max(str);
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends