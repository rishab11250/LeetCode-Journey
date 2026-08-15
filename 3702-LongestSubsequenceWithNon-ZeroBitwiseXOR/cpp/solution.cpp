#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        vector<int> zeros(n, 0);
        if (nums == zeros) {
            return 0;
        }
        int ans = 0;
        for(int i : nums){
            ans ^= i;
        }
        return ans ? n : n-1;
    }
};

int main(){
    
    return 0;
}