class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>store(26,0);
        for(char it: magazine){
            store[it-'a']++;
        }
        for (char it : ransomNote) {
            store[it - 'a']--;
            if (store[it - 'a'] < 0) {
                return false;  
            }
        }
        return true;
    }
    
};