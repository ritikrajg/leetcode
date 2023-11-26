class Solution {
public:
    
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums[0]==0){
            return nums[nums.size()-1];
        }
        while(nums[0]!=nums[nums.size()-1]){
            if(nums[0]>nums[nums.size()-1]){
                nums[0]=nums[0]-nums[nums.size()-1];
            }
            else{
                nums[nums.size()-1]=nums[nums.size()-1]-nums[0];
            }
        }
        return nums[0];
    }
};