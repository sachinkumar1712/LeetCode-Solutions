class Solution {
public:
    static bool cmp(const vector<int>&a ,const vector<int>&b){
        return a[1]<b[1];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),cmp);
        int count = 0, prevEndTime = INT_MIN;
        for(int i=0;i<pairs.size();i++){
            int start = pairs[i][0];
            int end = pairs[i][1];
            if(start>prevEndTime){
                count++;
                prevEndTime = end;
            }
        }
        return count;
    }
};