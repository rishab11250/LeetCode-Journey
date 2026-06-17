#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    char processStr(string s, long long k) {
        string result;
        long long cur_len = 0;
        vector<long long> len(s.size());
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '*') {
                if (cur_len > 0) {
                    cur_len--;
                }
            } else if (s[i] == '#') {
                cur_len *= 2;
            } else if (s[i] == '%') {
            } else {
                cur_len++;
            }
            len[i] = cur_len;
        }
        if (k >= cur_len) {
            return '.';
        }
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '*') {
            } else if (s[i] == '#') {
                long long prev = len[i] / 2;
                if (k >= prev) {
                    k %= prev;
                }
            } else if (s[i] == '%') {
                k = len[i] - 1 - k;
            } else {
                if (k == len[i] - 1) {
                    return s[i];
                }
            }
        }
        return '.';
    }
};

int main(){
    
    return 0;
}