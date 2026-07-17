class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
      int n = nums.size();
      int evenSum=0,oddSum=0;
      for(int i=0;i<n;i++){
        if(i%2==0){
            evenSum+=nums[i];
        }else{
            oddSum+=nums[i];
        }
      }
      int count = 0;
      int leftEven = 0,leftOdd = 0;
      for(int i=0;i<n;i++){
        if(i%2==0){
            evenSum-=nums[i];
        }
        else{
            oddSum-=nums[i];
        }
        if(leftEven+oddSum==leftOdd+evenSum){
            count++;
        }
        if(i%2==0){
            leftEven+=nums[i];
        }else{
            leftOdd+=nums[i];
        }
      }
      return count;;
    }
};