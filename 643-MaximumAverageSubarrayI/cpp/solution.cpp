#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;
        int n = nums.size();
        for(int i = 0;i<k;i++){
            sum += nums[i];
        }
        double ans = sum;
        for(int i = k;i<n;i++){
            sum = sum - nums[i-k] + nums[i];
            ans = max(ans,sum);
        }
        return ans/k;
    }
};

int main(){
    
    return 0;
}