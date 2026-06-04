// Last updated: 3/6/2026, 12:46:21 AM
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(INT_MIN == dividend && divisor == -1){
            return INT_MAX;
        }
        return dividend/divisor;
    }
};