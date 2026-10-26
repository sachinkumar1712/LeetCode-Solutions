class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<int> start,end;
        for(auto x:flowers){
            start.push_back(x[0]);
            end.push_back(x[1]);
        }
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());

        vector<int> ans;
        for(int time: people){
            int bloomed = upper_bound(start.begin(),start.end(),time) - start.begin();
            int finish = lower_bound(end.begin(),end.end(),time) - end.begin();
            ans.push_back(bloomed - finish);
        }
        return ans;
    }
};