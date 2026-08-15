class Solution {
public:
    int reverseDigit(int n ){
        int rev = 0;
        while(n!=0){
            int ld = n%10;
            rev = rev*10 + ld;
            n/=10;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> ans;
        for(int i=0;i<n;i++){
            ans.insert(nums[i]);
            int rev = reverseDigit(nums[i]);
            ans.insert(rev);
        }
        return ans.size();
    }
};