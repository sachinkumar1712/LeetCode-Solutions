class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i=0;i<n;i++){
             int mx = nums[0];
             for(int j=0;j<i;j++){
                mx = max(mx,nums[j]);
                
             }
             int mn = nums[i];
             for(int k=i;k<n;k++){
                mn = min(mn,nums[k]);
             }
             int diff = mx-mn;
             if(diff<=k){
                return i;
             }
        }
        return -1;
    }
};