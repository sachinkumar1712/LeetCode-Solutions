class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxIdx = 0;
        for(int i=0;i<n;i++){
            //check if yahah tak aa skte haiki nahi
            if(i>maxIdx) return false;
            //find the max possible idx
            maxIdx = max(maxIdx,i+nums[i]);

        }
        return true;
    }
};