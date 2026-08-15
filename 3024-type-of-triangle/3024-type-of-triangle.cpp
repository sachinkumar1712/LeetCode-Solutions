class Solution {
public:
    string triangleType(vector<int>& nums) {
        string s1 = "equilateral";
        string s2 = "isosceles";
        string s3 =  "scalene";
        string s4 = "none";
        if(nums[0]+nums[1] <= nums[2] || nums[1]+nums[2]<=nums[0] || nums[0]+nums[2]<=nums[1]){
           return s4;
        }else if(nums[0]==nums[1] && nums[0]==nums[2] && nums[1]==nums[2]){
            return s1;
        }else if(nums[0]==nums[1] || nums[0]==nums[2] || nums[1]==nums[2]){
            return s2;
        }else {
             return s3;
        }
    }
};