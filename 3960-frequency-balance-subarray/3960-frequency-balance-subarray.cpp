class Solution {
public:
    int getLength(vector<int>& nums) {
        vector<int> dremovical = nums; 

        int n = nums.size();
        int ans = 1;

        for (int i = 0; i < n; i++) {
            unordered_map<long long, int> freq;
            unordered_map<int, int> freqCount;
            int maxFreq = 0;

            for (int j = i; j < n; j++) {
                long long x = nums[j];

                int oldFreq = freq[x];
                if (oldFreq > 0) {
                    if (--freqCount[oldFreq] == 0)
                        freqCount.erase(oldFreq);
                }

                int newFreq = oldFreq + 1;
                freq[x] = newFreq;
                freqCount[newFreq]++;

                maxFreq = max(maxFreq, newFreq);

                int len = j - i + 1;

                if (len == 1) {
                    ans = max(ans, len);
                    continue;
                }

                int distinct = freq.size();

                
                if (distinct == 1) {
                    ans = max(ans, len);
                    continue;
                }

                
                if (maxFreq % 2 == 0 && freqCount.size() == 2) {
                    int half = maxFreq / 2;

                    auto it1 = freqCount.find(maxFreq);
                    auto it2 = freqCount.find(half);

                    if (it1 != freqCount.end() &&
                        it2 != freqCount.end() &&
                        it2->second > 0) {
                        ans = max(ans, len);
                    }
                }
            }
        }

        return ans;
    }
};