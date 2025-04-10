class Solution {
public:
    long long numberOfPowerfulInt(long long start, long long finish, int limit, std::string s) {
        return countPowerful(finish, limit, s) - countPowerful(start - 1, limit, s);
    }

private:
    long long countPowerful(long long val, int limit, const std::string& s) {
        std::string str = std::to_string(val);
        int len_prefix = str.length() - s.length();

        if (len_prefix < 0) return 0;

        std::vector<std::vector<long long>> dp(len_prefix + 1, std::vector<long long>(2, 0));

        dp[len_prefix][0] = 1;
        dp[len_prefix][1] = (str.substr(len_prefix) >= s ? 1 : 0);

        for (int i = len_prefix - 1; i >= 0; i--) {
            int digit = str[i] - '0';

            dp[i][0] = (limit + 1) * dp[i + 1][0];

            if (digit <= limit) {
                dp[i][1] = 1LL * digit * dp[i + 1][0] + dp[i + 1][1];
            } else {
                dp[i][1] = 1LL * (limit + 1) * dp[i + 1][0];
            }
        }

        return dp[0][1];
    }
};
