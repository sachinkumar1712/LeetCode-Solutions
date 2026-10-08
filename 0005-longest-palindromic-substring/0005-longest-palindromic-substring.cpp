class Solution {
public:
    string helper(string s,int left,int right){
        while(left>=0 && right<s.length() && s[left]== s[right]){
            left--;
            right++;
        }
        return s.substr(left+1,right-left-1);
    }
    string longestPalindrome(string s) {
        string ans = "";
        for(int i=0;i<s.length();i++){
            string odd = helper(s,i,i);
            string even = helper(s,i,i+1);
            if(odd.length()>ans.length()){
                ans = odd;
            }
            if(even.length()>ans.length()){
                ans = even;
            }
        }
        return ans;
    }
};