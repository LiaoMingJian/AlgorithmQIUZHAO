class Solution {
public:
    int climbStairs(int n) {
        int p = 0, q = 1, r;
        for (int i = 1; i <= n; ++i) {
            r = p + q;
            p = q;
            q = r;
        }
        return r;
    }
};
