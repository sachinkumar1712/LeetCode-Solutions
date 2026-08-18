class Solution {
public:
    bool isSum(int n){
        int sum = 0;
        while(n!=0){
            int ld = n%10;
            sum+=ld;
            n/=10;
        }
        if(sum%2==0) return true;
        else return false;
    }
    int countEven(int num) {
        int count = 0;
        for(int i=1;i<=num;i++){
            if(isSum(i)){
                count++;
            }
        }
        return count;
    }
};