#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        if (nums.empty()) return {};
        int max = nums[0];
        int min = nums[0];
        vector<int> result;
        for (int i : nums) {
            if (i > max) {
                max = i;
            }
            if (i < min) {
                min = i;
            }
        }
        unordered_set<int> numSet(nums.begin(), nums.end());
        for (int i = min; i <= max; i++) {
            if (numSet.find(i) == numSet.end()) {
                result.push_back(i);
            }
        }
        return result;
    }
};


int main(){
    
    return 0;
}