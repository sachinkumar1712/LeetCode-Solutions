int findNumbers(int* nums, int numsSize) {
    int count = 0;
    for(int i=0;i<numsSize;i+=1){
        int count1 = 0;
        int temp = nums[i];
        while(temp!=0){
            int ld = temp%10;
            temp/=10;
            count1+=1;
                   
        }
        if(count1%2==0){
            count+=1;
        }
    }
    return count;
}