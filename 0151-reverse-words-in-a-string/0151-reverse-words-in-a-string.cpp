class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        vector<string> words;
        string ans = "";
        string word ="";
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                word+=s[i];
            }else{
                if(word!=""){
                    words.push_back(word);
                    word = "";
                }
            }
        }
        // Last word
        if(word!=""){
            words.push_back(word);
        }
        for(int i=words.size()-1;i>=0;i--){
            ans+= words[i];
            if(i!=0){
                ans+=" ";
            }
        }
        return ans;

    }
};