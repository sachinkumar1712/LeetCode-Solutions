/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumZero(int n, int* returnSize) {
    int* ans = (int*)malloc(n*sizeof(int));
    int k = 0;
    for(int i=1;i<=n/2;i+=1){
        ans[k++] =i;
        ans[k++] = -i;
    }
    if(n%2!=0){
        ans[k++]=0;
    }
    *returnSize = n;
    return ans;
    
}