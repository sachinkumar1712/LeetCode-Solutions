class Solution {
public:
    bool prime(int n){
       if (n < 2)
            return false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }

        return true;
    }
    int sumOfPrimesInRange(int n) {
        int temp = n;
        int rev = 0;
        while(temp!=0){
            rev=rev*10+temp%10;
            temp/=10;
        }
        int st = min(n,rev);
        int end = max(n,rev);
        int sum = 0;
        for(int i=st;i<=end;i++){
            if(prime(i)){
              sum+=i;
            }
        }
        return sum;
    }
};