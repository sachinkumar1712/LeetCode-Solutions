class Solution {
public:
    int gcd(int a,int b){
        while(b!=0){
            int temp = b;
            b = a%b;
            a = temp;
        }
        return a;
    }
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int small = nums[0];
        int large = nums[0];
        for(int i = 1;i<n;i++){
            if(nums[i]<small){
                small = nums[i];
            }
            if(nums[i]>large){
                large = nums[i];
            }
        }
        return gcd(small,large);
    }
};
  