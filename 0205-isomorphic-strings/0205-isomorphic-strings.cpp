class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        vector<int>StoreSFreq(256,0);
        vector<int>StoreTFreq(256,0);
        for(int i=0;i<s.size();i++){
            if (StoreSFreq[s[i]] != StoreTFreq[t[i]]) {
                return false;
            }
            StoreSFreq[s[i]]=i+1;
            StoreTFreq[t[i]]=i+1;
        }
        return true;
    }
};