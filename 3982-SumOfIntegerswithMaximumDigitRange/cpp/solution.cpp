#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int bestRange = -1;
        int ans = 0;
        for (int num : nums) {
            int x = num;
            int mx = 0;
            int mn = 9;
            while (x > 0) {
                mx = max(mx, x % 10);
                mn = min(mn, x % 10);
                x /= 10;
            }
            int range = mx - mn;
            if (range > bestRange) {
                bestRange = range;
                ans = num;
            } else if (range == bestRange) {
                ans += num;
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}