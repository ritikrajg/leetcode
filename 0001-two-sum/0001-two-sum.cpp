class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr;
        int k=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                    if(nums[i]+nums[j]==target){
                    arr.push_back(i);
                    arr.push_back(j);
                        k++;
                    break;
                    }
            }
            if(k){break;}
            }
        
        return arr;
    }

};