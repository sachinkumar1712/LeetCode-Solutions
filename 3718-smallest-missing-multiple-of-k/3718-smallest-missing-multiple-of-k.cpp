class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n  = nums.size();
        for(int i=k; ;i+=k){
            bool check = false;
            for(int j=0;j<n;j++){
                if(nums[j]==i){
                    check = true;
                    break;
                }
            }
            if(!check){
                return i;
            }
        }
    }
};