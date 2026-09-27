class Solution {
public:
    typedef pair<int,int> pi;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>ans;
        unordered_map<int,int> um;
        for(int i=0;i<n;i++){
            um[nums[i]]++;
        }
        //  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;//Min Heap
        priority_queue<pi,vector<pi>,greater<pi>>pq;
        for(auto x:um){
            pq.push({x.second,x.first});
            if(pq.size()>k){
                pq.pop();
            }
        }
        while(pq.size()>0){
            int elem = pq.top().second;
            ans.push_back(elem);
            pq.pop();
        }
        return ans;
    }
};