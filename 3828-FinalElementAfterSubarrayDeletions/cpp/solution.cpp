#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int finalElement(vector<int>& nums) {
        int n = nums.size();
        return max(nums[0],nums[n-1]);
    }
};

int main(){
    
    return 0;
}