class Solution {
public:
    void helper(int index,string curr,vector<string>&ans,int n,string s){
        if(index==n){
            return ans.push_back(curr);
        }
        if(isdigit(s[index])){
            helper(index + 1, curr + s[index], ans, n, s);
        }
        else{
          helper(index+1,curr+(char)tolower(s[index]),ans,n,s);
          helper(index+1,curr+(char)toupper(s[index]),ans,n,s);  
        } 
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        if(s.empty())return ans;
        int n=s.length();
        helper(0,"",ans,n,s);
        return ans;
    }
};