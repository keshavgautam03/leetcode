class Solution {
public:
    int FindGcd(int a,int b){
        while(b!=0){
            int store=b;
            b=a%b;
            a=store;
        }
        return a;
    }
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2!= str2 +str1){
            return "";
        }
        int n1=str1.length();
        int n2=str2.length();
        return str2.substr(0,FindGcd(n1,n2));
    }
};