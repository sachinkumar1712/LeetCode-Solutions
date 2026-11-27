class Solution {
public:
    bool canAliceWin(int n) {
       if(n<10) return false;
       int i = 10;
       int count = 0;
       while(n>=i){
          n-=i;
          count++;
          i--;
       }
       return count%2==1; 
    }
};