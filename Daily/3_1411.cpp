class Solution {
public:
    int numOfWays(int n) {
        const int mod = 1e9 + 7;
        long twos = 6, threes = 6;
        for(int i = 2; i <= n; i++){
            long temp1 = (2 * twos + 2 * threes) % mod;
            long temp2 = (2 * twos + 3 * threes) % mod;
            twos = temp1;
            threes = temp2;
        }
        return (twos + threes) % mod;
    }
};
