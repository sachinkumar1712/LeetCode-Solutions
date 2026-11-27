class Solution {
public:
    int edit(int i,int j,string& a,string& b,vector<vector<int>>& dp){
        if(i<0) return j+1;
        if(j<0) return i+1;
        if(dp[i][j]!= -1) return dp[i][j];
        if(a[i]==b[j]) return dp[i][j] = edit(i-1,j-1,a,b,dp);
        else{
            int replace = edit(i-1,j-1,a,b,dp);
            int insert = edit(i,j-1,a,b,dp);
            int remove = edit(i-1,j,a,b,dp);
          return dp[i][j]  =  1 + min(replace,min(insert,remove));
        }
    }
    int minDistance(string a, string b) {
        int m = a.size(),n = b.size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return edit(m-1,n-1,a,b,dp);
    }
};