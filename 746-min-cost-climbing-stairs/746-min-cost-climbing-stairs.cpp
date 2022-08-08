class Solution {
public:
    int dp[1001];
    
    int sol(int i,vector<int>& cost){
        if(i==0 || i==1)
            return dp[i]=cost[i];
        if(dp[i])
            return dp[i];
        if(i==cost.size())
            return min(sol(i-1,cost),sol(i-2,cost));
        return dp[i]=cost[i]+min(sol(i-1,cost),sol(i-2,cost));
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        return sol(cost.size(),cost);
    }
};