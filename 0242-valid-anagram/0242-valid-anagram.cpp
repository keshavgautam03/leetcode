class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        int counts[26]={0};
        int countt[26]={0};
        bool answer=false;
        for(int i=0;i<s.length();i++){
            counts[s[i]-'a']++;
            countt[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(countt[i]==counts[i]){
                answer=true;
            }
            else{
                return false;
            }

        }
        return answer;
        
    }
};