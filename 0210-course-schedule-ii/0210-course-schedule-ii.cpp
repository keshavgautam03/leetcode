class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        for(auto it : prerequisites){
            adj[it[1]].push_back(it[0]);
        }
        vector<int>incoming(numCourses,0);
        for(int i=0;i<numCourses;i++){
            for(auto it : adj[i]){
                incoming[it]++;
            }
        }
        queue<int>q;
        for(int i=0;i<numCourses;i++){
            if(incoming[i]==0){
                q.push(i);
            }
        }
        vector<int>ans;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(auto it : adj[node]){
                incoming[it]--;
                if(incoming[it]==0)q.push(it);
            }
        }
        if (ans.size() != numCourses) return {};
        return ans;
    }
};