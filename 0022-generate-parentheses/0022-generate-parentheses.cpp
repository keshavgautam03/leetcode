class Solution {
public:
    void helper(vector<string>&ans,int n,string curr_paren,int openBracket,int closeBracket){
        if(openBracket==n && closeBracket==n){
            ans.push_back(curr_paren);
            return;
        }
        if(openBracket<n){
            helper(ans,n,curr_paren + "(",openBracket+1,closeBracket);
        }
        
        if(openBracket>closeBracket){
            helper(ans,n,curr_paren + ")",openBracket,closeBracket+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        helper(ans,n,"",0,0);
        return ans;
    }
};