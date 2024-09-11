class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans=0;
        int xorAns=start^goal;
        while(xorAns>0) {
            //checking bits=1
            ans+=xorAns & 1;

            //checking next right bit
            xorAns>>=1;
        }
        return ans;
    }
};