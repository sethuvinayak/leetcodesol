class Solution {
public:
    long long minOperations(vector<vector<int>>& queries) {
        long long res = 0;
        for (const auto &q : queries) {
            long long l = q[0];
            long long r = q[1];
            long long diff = weight(r) - weight(l - 1);
            res += (diff + 1) / 2;  // Ceiling division for odd counts
        }
        return res;
    }

private:
    // Compute prefix weight for [1..n]
    long long weight(long long n) {
        if (n <= 0) return 0;
        long long ans = 0;
        long long p = 1, d = 1;
        while (p <= n) {
            long long L = p;
            long long R = std::min(n, p * 4 - 1);
            long long cnt = R - L + 1;
            ans += cnt * d;
            p *= 4;
            ++d;
        }
        return ans;
    }
};
