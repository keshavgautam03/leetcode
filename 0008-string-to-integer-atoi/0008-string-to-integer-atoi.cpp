// class Solution {
// public:
//     int myAtoi(string s) {
//          int i = 0, sign = 1;
//         long result = 0;
//         while (i < s.size() && s[i] == ' ') i++;
//         if (i < s.size() && (s[i] == '-' || s[i] == '+')) {
//             sign = (s[i] == '-') ? -1 : 1;
//             i++;
//         }
//         while(i<s.size() && isdigit(s[i])){
//             result=10*result+(s[i]-'0');
//             i++;
//             if(result*sign>INT_MAX){
//                     return INT_MAX;
//             }
//             if(result*sign<INT_MIN){
//                     return INT_MIN;
//             }
//         }
//         return result * sign;
//     }
// }


class Solution {
public:
    long atoi(string s,int i,int sign,long ans){
        if (i >= s.size() || !isdigit(s[i])) {
            return sign * ans;
        }
        ans = ans * 10 + (s[i] - '0');
        if (sign * ans > INT_MAX) return INT_MAX;
        if (sign * ans < INT_MIN) return INT_MIN;
        return atoi(s,i+1,sign,ans);
    }
    int myAtoi(string s) {
         int i=0;
         int sign=1;
         long ans;
         while (i < s.size() && s[i] == ' '){
            i++;
         }

        if (i < s.size() && (s[i] == '-' || s[i] == '+')) {
         sign = (s[i] == '-') ? -1 : 1;
         i++;
        }
         return atoi(s,i,sign,0);
    }
};
