class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=s.size();
        int l=0;
        int r=0;
        int greed=g.size();
        sort(s.begin(),s.end());
        sort(g.begin(),g.end());
        while(l < n && r<greed){
            if(s[l]>=g[r]){
                r++;
            }
            l=l+1;
        }
        return r;
    }
};