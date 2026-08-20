class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        int ans = 0;
        stack<int> st;
        for(string s : operations){
            if(s == "C"){
                st.pop();
            }else if(s == "D"){
                st.push(2*(st.top()));
            }else if(s == "+"){
                int x = st.top();
                st.pop();
                int sum = x + st.top();
                st.push(x);
                st.push(sum);
            }else{
                st.push(stoi(s));
            }
        }
        while(st.size()!=0){
           ans+=st.top();
           st.pop();
        }
        return ans;
    }
};