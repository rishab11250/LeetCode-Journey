#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        int ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            long long  sum = 0;
            for (int j = i; j < n; j++) {
                sum += nums[j];
                int last_digit = sum % 10;
                long long temp = sum;
                while (temp >= 10) {
                    temp /= 10;
                }
                int first_digit = temp;
                if (first_digit == x && last_digit == x) {
                    ans++;
                }
            }
        }
        return ans;
    }
};


int main(){
    
    return 0;
}