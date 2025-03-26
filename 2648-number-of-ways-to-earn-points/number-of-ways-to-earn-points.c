#define MOD 1000000007
int waysToReachTarget(int target, int** types, int typesSize, int* typesColSize) {
     int dp[target + 1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;

    for (int i = 0; i < typesSize; i++) {
        int count = types[i][0];
        int points = types[i][1];

        for (int j = target; j >= 0; j--) {
            for (int k = 1; k <= count && j >= k * points; k++) {
                dp[j] = (dp[j] + dp[j - k * points]) % MOD;
            }
        }
    }
    return dp[target];
}