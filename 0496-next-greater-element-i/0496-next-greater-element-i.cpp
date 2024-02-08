class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> a;
        vector<int> b(nums2.size());
        a.push(-1);
        for(int i=nums2.size()-1;i>=0;i--){
            while(a.top()!=-1 && a.top()<=nums2[i]){
                a.pop();
            }
            b[i]=a.top();
            a.push(nums2[i]);
            
        }
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    nums1[i]=b[j];
                    break;
                }
            }
        }
        return nums1;
    }
};