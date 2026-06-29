#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(),nums.end());
        long long ans = 0;
        int n = nums.size(); 
        for (int i = n-1; i >= n-k; i--) { 
            if (mul > 0) { 
                ans += 1LL * nums[i] * mul; 
                mul--; 
            } 
            else { 
                ans += nums[i]; 
            } 
        } 
        return ans;
    }
};

int main(){
    
    return 0;
}