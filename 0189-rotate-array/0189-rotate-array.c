void reverse(int* arr,int st,int end){
    for(int i=st,j=end;i<j;i+=1,j-=1){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

}
void rotate(int* nums, int numsSize, int k) {
    if(k>numsSize){
        k=k%numsSize;
    }
    reverse(nums,0,numsSize-1);
    reverse(nums,0,k-1);
    reverse(nums,k,numsSize-1);
    
}