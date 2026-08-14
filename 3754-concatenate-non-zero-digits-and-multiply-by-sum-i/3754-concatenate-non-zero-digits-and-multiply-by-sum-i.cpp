class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum  = 0;
        long long num = 0;
        while(n!=0){
            int ld = n%10;
            if(ld!=0){
                num=num*10+ld;
            }
            sum+=ld;
            n/=10;
        }
        int rev = 0;
        while(num!=0){
            int ld1 = num%10;
            rev = rev*10+ld1;
            num/=10;

        }
        return sum*rev;
        
    }
};