class Solution {
public:
    static const int MOD = 1000000007;

    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        vector<int> pos, digit;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '0') {
                pos.push_back(i);
                digit.push_back(s[i] - '0');
            }
        }

        int n = digit.size();

        vector<long long> pow10(n + 1, 1);
        for (int i = 1; i <= n; i++)
            pow10[i] = (pow10[i - 1] * 10) % MOD;

        vector<long long> prefValue(n + 1, 0);
        vector<long long> prefSum(n + 1, 0);

        for (int i = 0; i < n; i++) {
            prefValue[i + 1] = (prefValue[i] * 10 + digit[i]) % MOD;
            prefSum[i + 1] = prefSum[i] + digit[i];
        }

        vector<int> ans;

        for (auto &q : queries) {
            int l = q[0], r = q[1];

            auto itL = lower_bound(pos.begin(), pos.end(), l);
            auto itR = upper_bound(pos.begin(), pos.end(), r);

            if (itL == itR) {
                ans.push_back(0);
                continue;
            }

            int L = itL - pos.begin();
            int R = (itR - pos.begin()) - 1;
            int len = R - L + 1;

            long long x = (prefValue[R + 1] -
                          (prefValue[L] * pow10[len]) % MOD + MOD) % MOD;

            long long sum = prefSum[R + 1] - prefSum[L];

            ans.push_back((x * (sum % MOD)) % MOD);
        }

        return ans;
    }
};