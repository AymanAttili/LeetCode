class Solution {
public:
    int dp[1001];
    
    int sol(int i,vector<int>& cost){
        if(i==0 || i==1)
            return dp[i]=cost[i];
        if(dp[i])
            return dp[i];
        
        return dp[i]=cost[i]+min(sol(i-1,cost),sol(i-2,cost));
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        cost.push_back(0);
        return sol(cost.size()-1,cost);
    }
};