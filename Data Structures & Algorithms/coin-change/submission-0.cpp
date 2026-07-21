class Solution {
public:
    int INF = 1e9;
    vector<int> dp;

    int function(vector<int>& coins,int amount){
        if(amount == 0){
            return 0;
        }

        if(amount<0){
            return INF;
        }

        if(dp[amount] != -1){
            return dp[amount];
        }

        int ans = INF;

        for(auto c:coins){
            ans = min(ans,1 + function(coins,amount - c));
        }

        return dp[amount] = ans;
        
    }

    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        dp.assign(amount+1, -1);

        int ans = function(coins,amount);
        if(ans == INF){
            return -1;
        }
        else{
            return ans;
        }
    }
};
