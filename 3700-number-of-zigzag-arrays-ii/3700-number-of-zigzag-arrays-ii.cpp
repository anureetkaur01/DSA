class Solution {
public:
    static const long long MOD = 1000000007;

    using Matrix = vector<vector<long long>>;

    Matrix multiply(const Matrix& A, const Matrix& B) {
        int n = A.size();
        Matrix C(n, vector<long long>(n, 0));

        for (int i = 0; i < n; i++) {
            for (int k = 0; k < n; k++) {
                if (A[i][k] == 0) continue;

                for (int j = 0; j < n; j++) {
                    if (B[k][j] == 0) continue;

                    C[i][j] =
                        (C[i][j] + A[i][k] * B[k][j]) % MOD;
                }
            }
        }

        return C;
    }

    Matrix matPow(Matrix base, long long exp) {
        int n = base.size();

        Matrix res(n, vector<long long>(n, 0));
        for (int i = 0; i < n; i++) {
            res[i][i] = 1;
        }

        while (exp) {
            if (exp & 1) {
                res = multiply(res, base);
            }

            base = multiply(base, base);
            exp >>= 1;
        }

        return res;
    }

    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1;
        int sz = 2 * m;

        Matrix T(sz, vector<long long>(sz, 0));

        // up[v] -> index v
        // down[v] -> index m + v

        for (int v = 0; v < m; v++) {

            // up'[v] = sum down[u] where u < v
            for (int u = 0; u < v; u++) {
                T[v][m + u] = 1;
            }

            // down'[v] = sum up[u] where u > v
            for (int u = v + 1; u < m; u++) {
                T[m + v][u] = 1;
            }
        }

        vector<long long> init(sz, 0);

        // Length = 2
        for (int v = 0; v < m; v++) {
            init[v] = v;             // smaller values before v
            init[m + v] = m - 1 - v; // larger values before v
        }

        Matrix P = matPow(T, n - 2);

        long long ans = 0;

        for (int i = 0; i < sz; i++) {
            long long cur = 0;

            for (int j = 0; j < sz; j++) {
                cur = (cur + P[i][j] * init[j]) % MOD;
            }

            ans = (ans + cur) % MOD;
        }

        return (int)ans;
    }
};