/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
     * returnSize = 2*numsSize;
     int* ans = (int*)malloc((*returnSize)*sizeof(int));
     for(int i=0;i<*returnSize;i+=1){
        ans[i] = nums[i % numsSize];
     }
     return ans;
}