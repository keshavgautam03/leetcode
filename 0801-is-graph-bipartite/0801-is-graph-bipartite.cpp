class Solution {
public:
    bool dfs(vector<vector<int>>& graph,vector<int>&vis,
    int node,int color){
        vis[node]=color;
        for(auto x : graph[node]){
            if(vis[x]==-1){
                bool check=dfs(graph,vis,x,!color);
                if(check==false){
                    return false;
                }
            }
            else{
                if(vis[x]==color){
                  return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>vis(n,-1);
        for(int i=0;i<n;i++){
            if(vis[i]==-1){
                bool ans=dfs(graph,vis,i,0);
                if(ans==false){
                    return false;
                }
            }
        }
        return true;
    }
};