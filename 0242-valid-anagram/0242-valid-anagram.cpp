// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         vector<int>freq(26,0);
//         for(char it : s){
//             freq[it-'a']++;
//         }
//         for(char it : t){
//             freq[it-'a']--;
//         }
//         for(int it : freq){
//             if(it!=0){
//                 return false;
//             }
//         }
//         return true;
//     }
// };
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<s.size();i++){
            if(s[i]!=t[i]){
                return false;
            }
        }
        return true;
    }
};