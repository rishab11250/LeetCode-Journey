#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> reverse = nums;
        std::reverse(reverse.begin(),reverse.end());
        nums.insert(nums.end(),begin(reverse),end(reverse));
        return nums;
    }
};

int main(){
    
    return 0;
}