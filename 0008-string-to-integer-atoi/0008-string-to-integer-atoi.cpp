class Solution {
public:
    int recursion(string& s,int i,int sign,long ans){
        if(i>=s.size() || !isdigit(s[i]))return ans*sign;
        ans=ans*10 + (s[i]-'0');
        if(ans*sign>INT_MAX)return INT_MAX;
        if(ans*sign<INT_MIN)return INT_MIN;
        return recursion(s,i+1,sign,ans);
    }
    int myAtoi(string s) { 
        // Using recursion
             long ans=0;
             int i=0;
             int sign=1;
             while(i<s.size() && s[i]==' '){
                i++;
             }
             if(i<s.size() && (s[i]=='-' || s[i]=='+')){
                sign=(s[i]=='-')?-1:1;
                i++;
             }
             return recursion(s,i,sign,ans);
        // long ans=0;
        // int n=s.size();
        // int i=0;
        // while (i < n && s[i] == ' ') {
        //     i++;
        // }
        // int sign=1;
        // if(s[i]=='-' || s[i]=='+'){
        //     sign=(s[i]=='-')? -1 : 1;
        //     i++;
        // }
        // while (i < n && s[i] >= '0' && s[i] <= '9') {
        //     ans = ans * 10 + (s[i] - '0');         
        //     if (ans * sign > INT_MAX) return INT_MAX;
        //     if (ans * sign < INT_MIN) return INT_MIN;

        //     i++;
        // }
        // return (ans * sign);      
    }
};