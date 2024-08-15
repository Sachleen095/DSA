class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        for(int i=0;i<m;i++) {
            int s=0,e=n;
            while(s<e) {
                int mid=(s+e)/2;
                if(grid[i][mid]>=0) {
                    s=mid+1;
                }
                else {
                    e=mid;
                }
            }
            ans+=n-s;
        }

        return ans;
    }
};