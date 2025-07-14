class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xorC=start ^ goal;
        int count=0;
        for(int i=0;i<32;i++){
            if(xorC & (1<<i)){
                count++;
            }
        }
        return count;
    }
};