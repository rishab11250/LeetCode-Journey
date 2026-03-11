class Solution {
public:
    int findComplement(int n) {
        long long decimal = 0;
        long long base = 1;
        while(n>0){
            int remainder = n%2;
            int flip = remainder==1 ? 0:1;
            decimal += (flip*base);
            base *= 2;
            n/=2;
        }
        return decimal;
    }
};