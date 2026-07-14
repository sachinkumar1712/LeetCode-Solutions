class Solution {
    public int trailingZeroes(int n) {
   
    int sum =0;
    for(int i = 5;i<=n;i*=5){
        if(i>0){
            sum=sum+n/i;
        }
    }
    return sum;
    }
    
}