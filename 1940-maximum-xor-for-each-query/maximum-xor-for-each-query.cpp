class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size();
        int xorr = nums[0];
        int maxxor = pow(2,maximumBit)-1;
        for(int i=1;i<n;i++) {
            xorr ^= nums[i];
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i] = xorr^maxxor;
            xorr^=nums[n-1-i];
        }
        return ans;

    }
};