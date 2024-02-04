/*class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int> m;
        for(int i=0;i<heights.size();i++){
            int a=i+1,b=heights[i],c=i-1;
            while(a<heights.size()){
                if(heights[a]>=heights[i]){
                   b=b+heights[i];
                   a++;
                }
                else{
                    break;
                }
            }
            while(c>=0){
                if(heights[c]>=heights[i]){
                    b=b+heights[i];
                    c--;
                }
                else{
                    break;
                }
            }
            m.push_back(b);
        }
        sort(m.begin(),m.end());
        return m[m.size()-1];
    }*/
    
    class Solution {
public:
    vector<int> nextSmallerElement(vector<int> &arr){
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        st.push(-1);

        for(int i=n-1; i>=0; i--){
            while(st.top() != -1 && arr[st.top()] >= arr[i]){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }

        return ans;
    }


    vector<int> previousSmallerElement(vector<int> &arr){
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        st.push(-1);
    
        for(int i=0; i<n; i++){
            while(st.top() != -1 && arr[st.top()] >= arr[i]){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
    
        return ans;
    }   


    int largestRectangleArea(vector<int>& heights) {
        vector<int> nextSmaller;
        vector<int> previousSmaller;
        int n = heights.size();

        nextSmaller = nextSmallerElement(heights);
        previousSmaller = previousSmallerElement(heights);
        for(int i=0;i<n;i++){
            cout<<nextSmaller[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<previousSmaller[i]<<" ";
        }
        int maxi = 0;
        for(int i=0; i<n; i++){
            if(nextSmaller[i] == -1){
                nextSmaller[i] = n;
            }
            int width = nextSmaller[i] - previousSmaller[i] - 1;
            int area = heights[i] * width;
            maxi = max(maxi, area);
        }

        return maxi;
    }
};
    