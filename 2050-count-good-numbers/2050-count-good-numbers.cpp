class Solution {
public:
const int mod=1e9+7; //prime no.
long long power(long long base,long long exp){
    long long ans=1;
    while(exp>0){
        if(exp%2!=0){
            ans=(ans*base) % mod;
        }
        base=(base*base) % mod;
        exp /= 2;
    }
    return ans;
}
    int countGoodNumbers(long long n) {
      long long evenCount=(n+1)/2;
      long long oddCount=n/2;
      long long oddIndexProduct=power(4,oddCount);
      long long evenIndexProduct=power(5,evenCount);
      return (oddIndexProduct*evenIndexProduct) % mod;
    }
};