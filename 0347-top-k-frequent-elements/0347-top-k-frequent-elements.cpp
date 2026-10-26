class Solution {
public:
    typedef pair<int,int> p;
    vector<int> topKFrequent(vector<int>& nums, int k) {
       int n = nums.size();
       vector<int> ans;
       unordered_map<int,int> um;
       for(int i=0;i<nums.size();i++){
          um[nums[i]]++;
       } 
       priority_queue<p,vector<p>,greater<p>> pq;
       for(auto x:um){
        pq.push({x.second,x.first});
        if(pq.size()>k) pq.pop();
       }
       while(pq.size()>0){
         int ele = pq.top().second;
         pq.pop();
         ans.push_back(ele);
        
       }
        return ans;
    }
};