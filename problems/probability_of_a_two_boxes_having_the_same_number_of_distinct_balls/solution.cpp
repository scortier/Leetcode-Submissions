class Solution {
public:
    double getProbability(vector<int>& balls)
    {
        vector<int> fact(7);
        fact[0] = 1;
        for (int i = 1; i < 7; i++) {
            fact[i] = fact[i - 1] * i;
        }

        int len = balls.size();
        // double dp[len+1][100+n][10+m]
        vector<vector<vector<double>>> dp(
            len + 1, vector<vector<double>>(200, vector<double>(20, 0)));
        dp[0][100][10] = 1;
        int total = 0;
        for (int i = 0; i < len; i++) {
            int cnt = balls[i];
            total += cnt;
            double p = 1.0;
            for (int j = 0; j < balls[i]; j++) {
                p *= 0.5;
            }
            for (int j = 0; j < 200; j++) {
                for (int k = 0; k < 20; k++) {
                    // 全部Aに入れる
                    if (j - cnt >= 0 && k - 1 >= 0) {
                        dp[i + 1][j][k] += dp[i][j - cnt][k - 1] * p;
                    }
                    // 全部Bに入れる
                    if (j + cnt < 200 && k + 1 < 20) {
                        dp[i + 1][j][k] += dp[i][j + cnt][k + 1] * p;
                    }
                    for (int l = 1; l < cnt; l++) {
                        int j2 = j + l - (cnt - l);
                        // cnt C l
                        int w = fact[cnt] / (fact[cnt - l] * fact[l]);
                        if (0 <= j2 && j2 < 200) {
                            dp[i + 1][j][k] += dp[i][j2][k] * p * w;
                        }
                    }
                }
            }
        }
        double ans = dp[len][100][10];
        double p2 = 1;
        for (int i = 1; i <= total / 2; i++) {
            p2 /= i;
            p2 *= total - (i - 1);
        }
        for (int i = 1; i <= total; i++) {
            p2 /= 2;
        }
        ans /= p2;
        return ans;
    }
};