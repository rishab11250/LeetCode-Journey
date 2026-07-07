#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long sumAndMultiply(int n) {
        long long nonzero = 0;
        long long sum = 0;
        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                nonzero = nonzero * 10 + digit;
                sum += digit;
            }
            n /= 10;
        }
        long long rev = 0;
        long long temp = nonzero;
        while (temp > 0) {
            rev = rev * 10 + (temp % 10);
            temp /= 10;
        }
        return sum * rev;
    }
};

int main(){
    
    return 0;
}