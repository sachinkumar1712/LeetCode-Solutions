class Solution {
public:
    typedef pair<int,int> pi;
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pi>pq;
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            int dis = abs(x-arr[i]);
            pi p = {dis,arr[i]};
            pq.push(p);
            if(pq.size()>k) pq.pop();
        }
        while(pq.size()>0){
            int ele = pq.top().second;
            ans.push_back(ele);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};