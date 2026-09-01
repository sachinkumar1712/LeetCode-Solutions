class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        stack<int> st;
        for(int i=2*n-1;i>=0;i--){
            int index = i%n;
            while(!st.empty()&& st.top()<= nums[index]){
                st.pop();
            }
            if(i<n){
                 ans[index] = (st.size()>0)? st.top():-1;

            }
          
            st.push(nums[index]);
        }
        return ans;
    }
};