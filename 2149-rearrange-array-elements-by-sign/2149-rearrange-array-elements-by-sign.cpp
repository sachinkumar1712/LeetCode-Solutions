class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>nums1;
        vector<int>nums2;
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                nums1.push_back(nums[i]);
            }else{
                nums2.push_back(nums[i]);
            }
        }
       
        for(int i=0;i<n;i+=2){
            nums[i] = nums1[i/2];
        }
        for(int i=1;i<n;i+=2){
            nums[i] = nums2[i/2];
        }
        return nums;
    }
};