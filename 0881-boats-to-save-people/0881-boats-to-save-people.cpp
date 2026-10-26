class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(),people.end());
        int boats = 0;
        int p1 = 0;
        int p2 = n-1;
        while(p1<=p2){
            if(people[p1]+people[p2]<=limit){
                p1++;
                boats++;
                p2--;
            }else{
                boats++;
                p2--;
            }
        }
        return boats;
    }
};