class Solution {
public:
 int helper(int i,int target,vector<int>&nums, unordered_map<int,vector<int>>&dp){
        int n = nums.size();
        if(i==n) return (target == 0);
        if(dp.find(target)==dp.end()){
            dp[target] = vector<int>(n,-1);
        }
        if(dp[target][i]!=-1) return dp[target][i];
        int pick = helper(i+1,target-nums[i],nums,dp);
        int skip = helper(i+1,target+nums[i],nums,dp);
        return dp[target][i] = pick+skip;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        unordered_map<int,vector<int>>dp;
        return helper(0,target,nums,dp);
    }






    // int helper(int i,int target,vector<int>&nums){
    //     if(i==nums.size()){
    //         if(target == 0) return 1;
    //         return 0;
    //     }
    //     int pick = helper(i+1,target-nums[i],nums);
    //     int skip = helper(i+1,target+nums[i],nums);
    //     return pick+skip;
    // }
    // int findTargetSumWays(vector<int>& nums, int target) {
    //     int n = nums.size();
    //     return helper(0,target,nums);
    // }
};