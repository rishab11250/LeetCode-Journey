#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        for(int i = 0;i<queries.size();i++){
            int mod = 1e9 + 7;
            int idx = queries[i][0];
            while(idx <= queries[i][1]){
                nums[idx] = (1LL*nums[idx] * queries[i][3]) % mod;
                idx += queries[i][2];
            }
        }
        int result = 0;
        for(int num : nums){
            result ^= num;
        }
        return result;
    }
};

int main(){
    
    return 0;
}