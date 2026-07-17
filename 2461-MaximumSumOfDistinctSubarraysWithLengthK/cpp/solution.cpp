#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans = 0;
        int n = nums.size();
        unordered_map<int, int> count;
        long long sum  = 0;
        for(int i = 0;i<k;i++){
            count[nums[i]]++;
            sum += nums[i];
        }
        if(count.size()==k) ans=sum;
        for(int i = k;i<n;i++){
            count[nums[i]]++;
            count[nums[i-k]]--;
            if(count[nums[i-k]] == 0) count.erase(nums[i-k]);
            sum += nums[i];
            sum -= nums[i-k];
            if(count.size() == k) ans = max(ans, sum);
        }
        return ans;
    }
};

int main(){
    
    return 0;
}