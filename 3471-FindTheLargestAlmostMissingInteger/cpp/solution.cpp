#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        if(k==n) return *max_element(nums.begin(),nums.end());
        unordered_map<int, int> freq;
        for(int i : nums){
            freq[i]++;
        }
        if (k == 1) {
            int ans = -1;
            for (auto& pair : freq) {
                if (pair.second == 1) {
                    ans = max(ans, pair.first);
                }
            }
            return ans;
        }
        int ans = -1;
        if (freq[nums[0]] == 1) {
            ans = max(ans, nums[0]);
        }
        if (freq[nums[n - 1]] == 1) {
            ans = max(ans, nums[n - 1]);
        }
        return ans;
    }
};

int main(){
    
    return 0;
}