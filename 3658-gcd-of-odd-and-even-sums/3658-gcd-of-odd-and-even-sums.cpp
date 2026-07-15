class Solution {
public:
    int gcd(int a, int b){
        while(b){
            int t = a % b;
            a = b;
            b = t;
        }
        return a;
    }
    int gcdOfOddEvenSums(int n) {
        int sumOdd = 0;
        int sumEven = 0;
        for(int i=1;i<=2*n;i++){
            if(i%2==0){
                sumEven+=i;
            }else{
                sumOdd+=i;
            }
        }
        return gcd(sumOdd,sumEven);
    }
};