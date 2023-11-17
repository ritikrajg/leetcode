class Solution{
    public:
bool check(int arr1[],int arr2[]){
    int i=0;
    while(i<26){
        if(arr1[i]!=arr2[i]){
        return 0;
        }
        i++;
    }
    return 1;
}

    bool checkInclusion(string s1,string s2){
        int arr1[26]={0};
        int arr2[26]={0};
        int i=0;
        while(i<s1.size()){
            int index=s1[i]-'a';
            arr1[index]++;
            i++;
        }
        int j=0;
        while(j<s1.size() && j<s2.size()){
            int index=s2[j]-'a';
            arr2[index]++;
            j++;
        }
        if(check(arr1,arr2)){
            return 1;
        }
        while(j<s2.size()){
            int index=s2[j]-'a';
            arr2[index]++;
            char old=s2[j-s1.size()];
            int index1=old-'a';
            arr2[index1]--;
            if(check(arr1,arr2)){
                return 1;
            }
            j++;
        }
        return 0;
    }
};