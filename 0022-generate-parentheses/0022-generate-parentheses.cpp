class Solution {
public:
    void dfs(vector<string>& ans,string stringToEnter,int countCloseP,int countOpenP,int n){
        if(countCloseP==n && countCloseP==n){
            ans.push_back(stringToEnter);
            return;
        }
        if(countOpenP<n){
            dfs(ans,stringToEnter + "(",countCloseP,countOpenP+1,n);
        }
        if(countCloseP<countOpenP){
            dfs(ans,stringToEnter + ")",countCloseP+1,countOpenP,n);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        dfs(ans,"",0,0,n);
        return ans;
    }
    
};