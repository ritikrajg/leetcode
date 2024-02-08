class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> a(nums.size());
        for(int i=0;i<nums.size();i++){
            int j;
            for(j=i+1;j<nums.size();j++){
                if(nums[j]>nums[i]){
                    a[i]=nums[j];
                    break;
                }
            }
            if(j==nums.size()){
              for(j=0;j<i;j++){
                  if(nums[j]>nums[i]){
                      a[i]=nums[j];
                      break;
                  }
              }
              if(j==i){
                  a[i]=-1;
              }
            }
            
        }
        return a;
    }
};