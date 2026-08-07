/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* createTargetArray(int* nums, int numsSize, int* index, int indexSize, int* returnSize) {
    *returnSize = numsSize;
    int size=0;
    int* ans = (int*)malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize;i+=1){
      for(int j=size;j>index[i];j--){
        ans[j]=ans[j-1];
      }
      ans[index[i]]=nums[i];
      size++;
    }
    return ans;
}