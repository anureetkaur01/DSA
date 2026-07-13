class Solution {
public:
    int minimumCost(vector<int>& nums, int k) {
        const long long MOD = 1'000'000'007;

        long long res = k;      // current resources
        long long ops = 0;      // operations performed so far
        long long ans = 0;

        for (int x : nums) {
            if (res < x) {
                long long need = x - res;
                long long t = (need + k - 1) / k;   // minimum operations needed

                __int128 cost = (__int128)t * (2LL * ops + t + 1) / 2;
                ans = (ans + (long long)(cost % MOD)) % MOD;

                ops += t;
                res += t * 1LL * k;
            }

            res -= x;
        }

        return (int)ans;
    }
};