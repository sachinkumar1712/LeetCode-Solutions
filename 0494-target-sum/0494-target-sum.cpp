class Solution {
public:
    int helper(int i,int target,vector<int>&nums){
        if(i==nums.size()){
            if(target == 0) return 1;
            return 0;
        }
        int pick = helper(i+1,target-nums[i],nums);
        int skip = helper(i+1,target+nums[i],nums);
        return pick+skip;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        return helper(0,target,nums);

    }
};