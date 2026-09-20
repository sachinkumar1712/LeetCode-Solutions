class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0;
        int n = s.length();
        for(int i=0;i<n;i++){
            int num = 'z'-s[i]+1;
            int idx = i+1;
            ans+=(num*idx);
        }
        return ans;
    }
};