class Solution {
public:
    int chori(int idx,vector<int>& arr,vector<int>& dp){//idx->0 to n-1
        if(idx>=arr.size()) return 0;
        if(dp[idx]!= -1) return dp[idx];
        int pick = arr[idx] + chori(idx+2,arr,dp);
        int skip = chori(idx+1,arr,dp);
        return dp[idx] =  max(pick,skip);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        return chori(0,nums,dp);
    }
};