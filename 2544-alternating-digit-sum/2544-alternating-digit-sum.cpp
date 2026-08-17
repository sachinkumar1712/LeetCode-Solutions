class Solution {
public:
    int alternateDigitSum(int n) {
        int count = 0;
        int temp = n;
        int sum =0;
        while(temp!=0){
            int ld = temp%10;
            count++;
            temp/=10;
        }
        while(n!=0){

        if(count%2!=0){
            
               sum=sum+n%10;
               n/=10;
               count--;
            
        }else{
               sum=sum-n%10;
                n/=10;
                count--;
    
        }
        }
        return sum;
    }
};