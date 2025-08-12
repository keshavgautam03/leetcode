
class Solution {
public:
   //USiNG sliding window
    int lengthOfLongestSubstring(string s) {
      int maxlength=0;
      int right=0;
      int left=0;
      int n=s.size();
    //   int hash[256];
    //   for(int i=0;i<256;i++){
    //     hash[i]=-1;
    //   }
    vector<int>hash(256,-1);
      while(right<n){
        if(hash[s[right]]!=-1 && hash[s[right]]>=left){
            left=hash[s[right]]+1;
        }
  

        maxlength=max(right-left+1,maxlength);
        hash[s[right]]=right;
        right++;
      }
      return maxlength;
    }
};
