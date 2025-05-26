//self
class Solution {
public:
    bool isPrime(long long n){
        if(n<=1)return false;
        if(n==2 || n==3)return true;
        if(n % 2 == 0 || n % 3 == 0) return false;
        int limit = sqrt(n);
        for(int i=5;i<=limit;i+=6){
            if(n%i==0 || n%(i+2)==0)return false;
        }
        return true;
    }
    long long sumOfLargestPrimes(string s) {
       unordered_set<long long>uniqueNumbers;
        int m=s.size();
        for(int i=0;i<m;i++){
            string numberString="";
            for(int j=i;j<m;j++){
                numberString+=s[j];
                try{
                    long long number= stoll(numberString);
                    uniqueNumbers.insert(number);
                }
                    catch(...){
                        continue;
                    }
            }
        }
            vector<long long>allPrimes;
            for(auto it : uniqueNumbers){
                if(isPrime(it)){
                    allPrimes.push_back(it);
                }
            }
            if(allPrimes.empty())return 0;  
            sort(allPrimes.begin(),allPrimes.end(),greater<long long>());
            long long ans=0;
            for(int i=0;i<min(3,(int)allPrimes.size());i++){
                ans+=allPrimes[i];
            }
            return ans;
    }
};