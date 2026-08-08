int findSpecialInteger(int* arr, int arrSize) {
    int count =1;
    for(int i=1;i<arrSize;i+=1){
        if(arr[i]==arr[i-1]){
            count++;
        }else{
            count=1;
        }
        if(count>arrSize/4){
            return arr[i];
        }
    }
    return arr[0];
}