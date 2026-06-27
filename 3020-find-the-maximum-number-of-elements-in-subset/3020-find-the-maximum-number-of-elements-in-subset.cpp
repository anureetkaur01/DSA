class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long, int> freq;
        for (int x : nums) freq[x]++;

        int ans = 1;

        // Special case for 1
        if (freq.count(1)) {
            int c = freq[1];
            ans = max(ans, (c % 2 == 0) ? c - 1 : c);
        }

        for (auto &[start, cnt] : freq) {
            if (start == 1) continue;

            long long cur = start;
            int pairs = 0;

            while (true) {
                if (!freq.count(cur) || freq[cur] == 0) {
                    ans = max(ans, max(1, 2 * pairs - 1));
                    break;
                }

                if (freq[cur] == 1) {
                    ans = max(ans, 2 * pairs + 1);
                    break;
                }

                // Use two copies of current value
                pairs++;

                long long nxt = cur * cur;
                if (nxt > 1000000000LL || !freq.count(nxt)) {
                    ans = max(ans, 2 * pairs - 1);
                    break;
                }

                cur = nxt;
            }
        }

        return ans;
    }
};