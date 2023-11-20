class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start=0;
        int end=arr.size()-1;
        
        while(start<end){
            int mid=start+(end-start)/2;
            if(arr[start]>arr[start+1]){
                return start;
            }
            else if(arr[end]>arr[end-1]){
                return end;
            }
            else if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid]>arr[mid+1] && arr[mid-1]>arr[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
            
        }
        return start;
    }
};
