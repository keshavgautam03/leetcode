class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>freq(26,0);
        for(char it : s){
            freq[it-'a']++;
        }
        for(char it : t){
            freq[it-'a']--;
        }
        for(int it : freq){
            if(it!=0){
                return false;
            }
        }
        return true;
    }
};