class Solution {
private:
    int solve(string &text1,string &text2,int i,int j,vector<vector<int>> &dp) {
        if(i==text1.length() || j==text2.length()) {
            return 0;
        }

        if(dp[i][j]!=-1) {
            return dp[i][j];
        }
        int ans=0;
        if(text1[i]==text2[j]) {
            ans=1+solve(text1,text2,i+1,j+1,dp);
        }
        else {
            ans=max(solve(text1,text2,i+1,j,dp),solve(text1,text2,i,j+1,dp));
        }

        dp[i][j]=ans;
        return dp[i][j];
    }
public:
    int longestCommonSubsequence(string text1, string text2) {
        //dp and memoization
        vector<vector<int>> dp(text1.length(),vector<int>(text2.length(),-1));
        return solve(text1,text2,0,0,dp);
    }
};