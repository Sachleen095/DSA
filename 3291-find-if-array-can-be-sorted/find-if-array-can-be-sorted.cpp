class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> countBits(n+1,0);
        for(int i=0;i<n;i++) {
            int num=nums[i];
            while(num) {
                if(num&1) {
                    countBits[i]++;
                }
                num>>=1;
            }
        }

        countBits[n]=-1;
        int left=0,right=0;
        while(right<=n) {
            if(countBits[left]==countBits[right]) {
                right++;
                continue;
            }
            else {
                sort(nums.begin()+left,nums.begin()+right);
                left=right;
            }
        }

        for(int i=0;i<n-1;i++) {
            if(nums[i+1]<nums[i]) {
                return false;
            }
        }

        return true;
    }
};