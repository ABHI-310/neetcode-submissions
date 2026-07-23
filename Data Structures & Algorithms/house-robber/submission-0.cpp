class Solution {
int INF =1e7;

public:

    int solve(vector<int>&dp,vector<int>& nums,int i){

        if(i>=nums.size()){
            return 0;
        }

        if(dp[i]!=INF){
            return dp[i];
        }

        int ans = -1;

        ans = max(nums[i] + solve(dp,nums,i+2),solve(dp,nums,i+1));

        return dp[i] = ans;
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1,INF);

        return solve(dp,nums,0);
    }
};
