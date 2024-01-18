class Solution {
public:
    int dp[100];
    int climbStair(int n) {
        if(n==0 || n==1) return 1;
        if(dp[n]!=-1) return dp[n];
        return dp[n] = climbStair(n-1) + climbStair(n-2);
    }
    int climbStairs(int n){
        memset(dp,-1,sizeof(dp));
        return climbStair(n);
    }
};