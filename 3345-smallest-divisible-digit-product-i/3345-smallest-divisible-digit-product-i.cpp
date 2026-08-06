class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
            int temp = n;
            int pod = 1;
            while(temp>0){
                pod = pod* (temp%10);
                temp/=10;
            }
            if(pod%t==0){
                return n;
            }
            n++;
        }

    }
};