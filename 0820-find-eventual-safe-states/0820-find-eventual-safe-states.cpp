class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>incoming(n,0);
        vector<vector<int>>reverseAdj(n);
        for(int i=0;i<n;i++){
            for(auto it:graph[i]){
                reverseAdj[it].push_back(i);
                incoming[i]++;
            }
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(incoming[i]==0){
                q.push(i);
            }
        }
        vector<int>ans;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto it : reverseAdj[node]){
                incoming[it]--;
                if(incoming[it]==0)q.push(it);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};