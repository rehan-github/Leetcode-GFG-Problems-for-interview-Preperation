class Solution {
public:
    bool isPowerOfFour(int n) {
       return __builtin_popcount(n) == 1 && ((~0x55555555 & n) == 0);
    }
};