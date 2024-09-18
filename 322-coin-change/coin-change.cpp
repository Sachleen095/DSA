class Solution {
public:
    int solve(vector<int>& coins, int index, int amount, vector<vector<int>>& dp) {
        if (amount == 0) return 0;               // If amount is 0, no coins are needed
        if (index < 0) return 1e9;               // If there are no coins left, return an impossible large number
        if (dp[index][amount] != -1) return dp[index][amount]; // If result is already computed, return it
        
        int ans = 1e9;                           // Set a large initial value for the answer
        if (coins[index] > amount) {
            ans = solve(coins, index - 1, amount, dp); // Skip the current coin if it's larger than the amount
        } else {
            ans = min(ans, 1 + solve(coins, index, amount - coins[index], dp)); // Choose the coin and reduce the amount
            ans = min(ans, solve(coins, index - 1, amount, dp));                // Or skip the coin
        }
        
        return dp[index][amount] = ans;          // Store the result in dp and return it
    }
    
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(), coins.end());        // Sort the coins to ensure the order
        vector<vector<int>> dp(coins.size(), vector<int>(amount + 1, -1)); // Memoization table initialized with -1
        int ans = solve(coins, coins.size() - 1, amount, dp);
        return ans >= 1e9 ? -1 : ans;            // If the answer is still a large number, return -1 (no solution)
    }
};
