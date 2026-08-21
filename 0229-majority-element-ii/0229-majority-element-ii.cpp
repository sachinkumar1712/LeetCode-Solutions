class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> um;
        vector<int>ans;
        for(int i=0;i<n;i++){
            um[nums[i]]++;
        }
        for(auto i : um){
            if(i.second >n/3){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};