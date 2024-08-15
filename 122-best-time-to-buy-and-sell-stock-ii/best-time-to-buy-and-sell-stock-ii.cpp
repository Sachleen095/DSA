class Solution {
private:
    int solve(int index,bool buy,vector<int> &prices,vector<vector<int>> &dp) {
        if(index==prices.size()) {
            return 0;
        }
        if(dp[index][buy]!=-1) {
            return dp[index][buy];
        }
        int profit=0;
        //available for buying
        if(buy) {
            profit=max((-prices[index]+solve(index+1,false,prices,dp)) , (0+solve(index+1,true,prices,dp)));
        }
        // to sell
        else {
            profit=max((prices[index]+solve(index+1,true,prices,dp)) , (0+solve(index+1,false,prices,dp)));
        }

        dp[index][buy]=profit;
        return dp[index][buy];
    }
public:
    int maxProfit(vector<int>& prices) {
        //using dp and memoization
        int n=prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        bool buy=true;
        int ans=solve(0,buy,prices,dp);
        return ans;
    }
};