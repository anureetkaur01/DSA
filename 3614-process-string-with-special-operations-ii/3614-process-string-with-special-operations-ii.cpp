class Solution {
public:
    char processStr(string s, long long k) {
        int n = s.size();

        vector<long long> len(n);
        long long curr = 0;

        
        for (int i = 0; i < n; i++) {
            if ('a' <= s[i] && s[i] <= 'z') {
                curr++;
            }
            else if (s[i] == '*') {
                if (curr > 0) curr--;
            }
            else if (s[i] == '#') {
                curr = min((long long)1e15, curr * 2);
            }
            else if (s[i] == '%') {
                // length unchanged
            }

            len[i] = curr;
        }

        if (k >= curr) return '.';

       
        for (int i = n - 1; i >= 0; i--) {
            long long curLen = len[i];
            long long prevLen = (i == 0 ? 0 : len[i - 1]);

            if ('a' <= s[i] && s[i] <= 'z') {

                
                if (k == curLen - 1)
                    return s[i];

                
            }

            else if (s[i] == '*') {

                
                continue;
            }

            else if (s[i] == '#') {

                long long half = curLen / 2;

                if (k >= half)
                    k -= half;
            }

            else if (s[i] == '%') {

                if (curLen > 0)
                    k = curLen - 1 - k;
            }
        }

        return '.';
    }
};