class Solution {
public:
    typedef pair<int,int> pi;
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>ans;
        priority_queue<pi>pq;//MaxHeap(max size is K)

        for(int ele: arr){
            int dist =  abs(x-ele);
            pi p = {dist,ele};
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