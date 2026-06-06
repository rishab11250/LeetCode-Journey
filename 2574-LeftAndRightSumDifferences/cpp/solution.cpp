#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> left = {0};
        vector<int> right = {0};
        for (int i = 1; i < nums.size(); i++) {
            left.push_back(nums[i - 1] + left[left.size() - 1]);
        }
        for (int i = nums.size() - 2; i >= 0; i--) {
            right.push_back(nums[i + 1] + right[right.size() - 1]);
        }
        reverse(right.begin(), right.end());
        for (int i = 0; i < left.size(); i++) {
            left[i] = abs(left[i] - right[i]);
        }
        return left;
    }
};

int main(){
    
    return 0;
}