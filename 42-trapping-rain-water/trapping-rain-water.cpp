class Solution {
public:
    int trap(vector<int>& height) {
        //brute force using leftMax and rightMax
        int n=height.size();
        vector<int> prefix(n,0);
        vector<int> suffix(n,0);
        int ans=0;
        prefix[0]=height[0],suffix[n-1]=height[n-1];
        for(int i=1;i<n;i++) {
            prefix[i]=max(prefix[i-1],height[i]);
        }
        for(int i=n-2;i>=0;i--) {
            suffix[i]=max(suffix[i+1],height[i]);
        }

        for(int i=0;i<n;i++) {
            int leftMax=prefix[i],rightMax=suffix[i];
            if(height[i]<leftMax && height[i]<rightMax) {
                ans+=min(leftMax,rightMax)-height[i];
            }
        }

        return ans;
    }
};