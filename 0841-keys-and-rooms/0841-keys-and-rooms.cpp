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
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool>vis(n,false);
        bfs(0,rooms,vis);
        for(int i=0;i<n;i++){
             if(!vis[i]) return false;
        }
        return true;

    }
};