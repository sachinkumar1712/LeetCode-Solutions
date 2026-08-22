class Solution {
public:
    bool checkDivisibility(int n) {
        int temp = n;
        int sum = 0;
        int mul = 1;
    while(temp!=0){
        sum = sum + temp%10;
        mul = mul*(temp%10);
        temp/=10;
    }
    if(n%(sum+mul)==0){
        return true;
    }else{
        return false;
    }
    }
};