class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int k=1;
        for(int i=1;i<n;i++){
            if(nums[0]!=nums[i]){k=0;}
            if(nums[i-1]>nums[i]){count++;}
        
        }
        if(nums[n-1]>nums[0]){count++;}
        if(k==1 ){count=1;};
        if(count==1){return true;}
        
        else{return false;}
    }
};