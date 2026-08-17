bool checkPerfectNumber(int num) {
    int temp = num;
    int sum =0;
    for(int i=1;i<=temp/2;i+=1){
        if(temp%i==0){
           sum+=i;
        }
      
    }
      if(sum==num){
            return true;
        }else{
           return false;
    }
}