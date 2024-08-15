class Solution {
private:
    int countPairs(vector<int> &nums,int dist) {
        int count=0;
        int left=0;
        for(int right=1;right<nums.size();right++) {
            while(nums[right]-nums[left]>dist) {
                left++;
            }
            count+=right-left;
        }
        return count;
    }
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int minDist=0;
        int maxDist=nums[n-1]-nums[0];
        while(minDist<maxDist) {
            int midDist=(minDist+maxDist)/2;
            int pairs=countPairs(nums,midDist);
            if(pairs<k) {
                minDist=midDist+1;
            }
            else {
                maxDist=midDist;
            }
        }

        return minDist;
    }
};