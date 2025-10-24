class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.size();
        int n2=word2.size();
        int n=min(word1.size(),word2.size());
        string ans="";
        for(int i=0;i<n;i++){
            ans.push_back(word1[i]);
            ans.push_back(word2[i]);
        }
        if(n1>n){
             ans+=word1.substr(n);
        }
        if(n2>n){
             ans+=word2.substr(n);
        }
        return ans;
        
    }
};