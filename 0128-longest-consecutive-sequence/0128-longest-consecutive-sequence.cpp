class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int lastNum = INT_MIN;
        int count = 0;
        int ans = 0;
        if(n==0){
            return 0;
        }
        for(int i=0;i<n;i++){
            if(nums[i]-1== lastNum){
                lastNum = nums[i];
                count++;
            }else if(nums[i]!=lastNum){
                lastNum = nums[i];
                count = 1;
            }
            ans = max(ans,count);
        }
        return ans;
    }
};