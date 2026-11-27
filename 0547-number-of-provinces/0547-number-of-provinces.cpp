class Solution {
public:
    void bfs(int src,vector<vector<int>> &adj,vector<bool>& vis){
        queue<int>q;
        vis[src] = true;
        q.push(src);
        while(q.size()>0){
            int front = q.front();
            q.pop();
            for(int node: adj[front]){
                if(!vis[node]){
                    q.push(node);
                    vis[node] = true;
                }
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int count = 0;
        vector<bool>vis(n,false);
        vector<vector<int>> adj(n,vector<int>(0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j] == 1) {
                    adj[i].push_back(j);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(!vis[i]){
                bfs(i,adj,vis);
                count++;
            }
        }
        return count;
    }
};