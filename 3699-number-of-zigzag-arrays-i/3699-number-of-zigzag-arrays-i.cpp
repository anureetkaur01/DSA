class Solution {
public:
    
  static constexpr int MOD = 1e9 + 7;

    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1;

        vector<int> up(m + 1), down(m + 1);

        
        for (int i = 1; i <= m; i++) {
            up[i] = i - 1;
            down[i] = m - i;
        }

        for (int len = 3; len <= n; len++) {

            vector<int> pref(m + 1, 0);
            vector<int> suff(m + 2, 0);

            for (int i = 1; i <= m; i++) {
                pref[i] = pref[i - 1] + down[i];
                if (pref[i] >= MOD) pref[i] -= MOD;
            }

            for (int i = m; i >= 1; i--) {
                suff[i] = suff[i + 1] + up[i];
                if (suff[i] >= MOD) suff[i] -= MOD;
            }

            for (int i = 1; i <= m; i++) {
                up[i] = pref[i - 1];
                down[i] = suff[i + 1];
            }
        }

        long long ans = 0;

        if (n == 2) {
            for (int i = 1; i <= m; i++) {
                ans += up[i] + down[i];
            }
        } else {
            for (int i = 1; i <= m; i++) {
                ans += up[i];
                ans += down[i];
            }
        }

        return ans % MOD;
    }
};