class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        if(x<0) return false;
        int reverse = 0;
        while(temp > 0){
            int digit = temp % 10;
            reverse = (1LL * reverse * 10) + digit;
            temp /= 10;
        }
        return x==reverse;
    }
};