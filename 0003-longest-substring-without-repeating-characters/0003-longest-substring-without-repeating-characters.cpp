
class Solution {
public:
   //USiNG sliding window
    int lengthOfLongestSubstring(string s) {
     int r=0,l=0;
     int n=s.length();
     int maxlen=0;
     vector<int>hash(256,-1);
     while(r<n){
        if(hash[s[r]]!=-1 && hash[s[r]]>=l){
            l = hash[s[r]] + 1;
        }
        maxlen=max(maxlen,r-l+1);
        hash[s[r]]=r;
        r++;
     }
     return maxlen;
    }
};
