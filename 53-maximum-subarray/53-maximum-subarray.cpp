class Solution {
public:
    int dp[100000];
    
   int sol(int i,vector<int>&v){
        if(i==v.size())
            return -1e9;
        if(dp[i]!=-1)
            return dp[i];
        return dp[i] = v[i]+max(sol(i+1,v), 0);
    }
   int maxSubArray(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int mx=-1e9;
        for(int i=0 ;i<nums.size() ; i++ ){
            mx = max(mx,sol(i,nums));
        }
        return mx;
    }
    
    
};