class Solution {
public:
    int maxProduct(int n) {
        int largest = 0,secondLargest = 0;
        while(n!=0){
            int ld = n%10;
            if(ld>=largest){
                secondLargest = largest;
                largest = ld;
            }else if(ld>secondLargest){
                secondLargest = ld;
            }
            n/=10;
        }
        return largest*secondLargest;
    }
};