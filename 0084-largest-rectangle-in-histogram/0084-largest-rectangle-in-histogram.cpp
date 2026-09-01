class Solution {
public:
    
    int largestRectangleArea(vector<int>& heights) {
        int n  = heights.size();
        vector<int> nsi(n);
        vector<int> psi(n);

        stack<int> st;
        //previous smaller index
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            psi[i] = st.empty()?-1:st.top();
            st.push(i);  
        }

        //next smaller index
        while(!st.empty()){
            st.pop();
        }

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            nsi[i] = st.empty()?n:st.top();
            st.push(i);
        }

        int maxArea = 0;
        for(int i=0;i<n;i++){
            int width = nsi[i]-psi[i] - 1;
            int Area = heights[i]* width;
            maxArea = max(Area,maxArea);
        }
        return maxArea;
    }
};