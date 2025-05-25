class Solution {
public:
    // Efficient prime checker up to 1e9
    bool isPrime(long long num) {
        if (num <= 1) return false;
        if (num == 2 || num == 3) return true;
        if (num % 2 == 0 || num % 3 == 0) return false;
        for (long long i = 5; i * i <= num; i += 6) {
            if (num % i == 0 || num % (i + 2) == 0) return false;
        }
        return true;
    }

    long long sumOfLargestPrimes(string s) {
        unordered_set<long long> uniqueNumbers;
        int n = s.length();

        // Generate all substrings
        for (int i = 0; i < n; ++i) {
            string numStr = "";
            for (int j = i; j < n ; ++j) {  // Max 10 digits
                numStr += s[j];
                try {
                    long long num = stoll(numStr);
                    uniqueNumbers.insert(num);
                } catch (...) {
                    continue;  // Skip numbers that are too large
                }
            }
        }

        vector<long long> primes;
        for (long long num : uniqueNumbers) {
            if (isPrime(num)) {
                primes.push_back(num);
            }
        }

        if (primes.empty()) return 0;

        sort(primes.begin(), primes.end(), greater<long long>());

        long long sum = 0;
        for (int i = 0; i < min(3, (int)primes.size()); ++i) {
            sum += primes[i];
        }

        return sum;
    }
};
