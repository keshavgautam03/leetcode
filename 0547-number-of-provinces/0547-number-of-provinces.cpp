class Solution {
public:
void dfs(int node, vector<int>& vis, vector<vector<int>>& adjList)
{
    vis[node]=1;
    for(int it : adjList[node]){
        if(!vis[it]){
            dfs(it,vis,adjList);
        }
    }
}
int findCircleNum(vector<vector<int>>& isConnected) {
       int n=isConnected.size();
    vector<vector<int>> adjList(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(isConnected[i][j]){
                adjList[i].push_back(j);
                adjList[j].push_back(i);
            }
        }
    }
    vector<int>vis(n,0);
    int count=0;
    for(int i=0;i<n;i++){
        if(vis[i]==0){
            count++;
            dfs(i,vis,adjList);
        }
    }
    return count;
    }
};

