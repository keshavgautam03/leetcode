class Solution {
public:
    bool isPalindrome(string s) {
    //     vector<char>store;
    //     for(int i=0;i<s.size();i++){
    //         if(s[i]!=' ' && s[i]!=',' && s[i]!=':'){
    //             store.push_back(s[i]);
    //         }

    //     }
    // for (auto& x : s) {
    //     x = tolower(x);
    //     }
    //      int left = 0;
    // int right = s.length() - 1;
    // while (left < right)
    // {
    //     if (s[left] != s[right])
    //         return false;

    //     left++;
    //     right--;
    // }

    // return true;
     vector<char> store;
        
        // Clean the string: keep only alphanumeric and convert to lowercase
        for (char c : s) {
            if (isalnum(c)) {
                store.push_back(tolower(c));
            }
        }

        // Two-pointer check for palindrome
        int left = 0;
        int right = store.size() - 1;
        while (left < right) {
            if (store[left] != store[right])
                return false;
            left++;
            right--;
        }

        return true;
    }
};