class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        const long long N = 1e5+5;
        long long  x , ss[N]{0}, dp[N]{0};
    for(int i=0 ; i<nums.size() ; i++) {
        ss[nums[i]]++;
    }
    dp[1]=ss[1];
    for(int i=2 ; i<=1e5 ; i++){
        dp[i]=max(dp[i-1],(ss[i]*i)+dp[i-2]);
    }

    long long mx=0;
    for(int i=1 ; i<=1e5 ; i++)
        mx = max(mx,dp[i]);
    return mx;
    }
};