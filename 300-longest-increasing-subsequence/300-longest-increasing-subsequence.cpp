class Solution {
public:
    
    int dp[2501][2501];
    

    
    int sol(vector<int>&v,int i,int pre){
        if(i==v.size())
            return 1;
        
        if(dp[i][pre]>0)
            return dp[i][pre];
        
        int x=0;
        
        if(v[i]>v[pre])
            x=1 + sol(v,i+1,i);
        x = max(x,sol(v,i+1,pre));
        
        return dp[i][pre] = x;
    }
    
    int lengthOfLIS(vector<int>& nums) {
        int mx=0;
        for(int i=0 ; i<nums.size() ; i++)
            mx = max(mx,sol(nums,i,i));
        return mx;
    }
};