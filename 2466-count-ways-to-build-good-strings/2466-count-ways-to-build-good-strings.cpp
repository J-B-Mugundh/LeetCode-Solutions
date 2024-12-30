class Solution {
public:
    const int MOD = 1e9 + 7;

    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int> dp(high + 1, 0);
        dp[0] = 1;

        for (int size = 1; size <= high; ++size) {
            if (size >= zero) dp[size] = (dp[size] + dp[size - zero]) % MOD;
            if (size >= one) dp[size] = (dp[size] + dp[size - one]) % MOD;
        }

        int result = 0;
        for (int size = low; size <= high; ++size) {
            result = (result + dp[size]) % MOD;
        }

        return result;
    }
};
