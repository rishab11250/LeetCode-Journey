#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxPower(string s) {
        if(s.size() == 1 ) return 1;
        int count = 1;
        int ans = 1;
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i-1]) {
                count++;
                ans = max(ans, count); 
            } else {
                count = 1;
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}