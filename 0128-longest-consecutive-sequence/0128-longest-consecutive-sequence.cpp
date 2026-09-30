class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        if(n==0) return 0;
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        for(auto x:st){
            if(st.find(x-1) == st.end()){
                int ele = x;
                int count = 1;
                while(st.find(ele+1)!=st.end()){
                    count++;
                    ele++;
                }
                ans=max(ans,count);
            }
        }
        return ans;
    }
};