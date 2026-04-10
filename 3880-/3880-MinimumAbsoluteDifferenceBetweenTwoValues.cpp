#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int res = INT_MAX;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(nums[i] == 1 && nums[j] == 2){
                    res = min(res, abs(j-i));
                }
            }
        }
        return res == INT_MAX ? -1 : res;
    }
};

int main(){
    
    return 0;
}