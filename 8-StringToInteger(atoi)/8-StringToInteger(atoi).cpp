#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.size();
        while (i < n && s[i] == ' ') {
            i++;
        }
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-') {
                sign = -1;
            }
            i++;
        }
        long ans = 0;
        for (; i < n; i++) {
            if (!isdigit(s[i])) {
                break;
            }
            ans = ans * 10 + (s[i] - '0');
            if (ans * sign >= INT_MAX) return INT_MAX;
            if (ans * sign <= INT_MIN) return INT_MIN;
        }
        return (int)(ans * sign);
    }
};

int main(){
    
    return 0;
}