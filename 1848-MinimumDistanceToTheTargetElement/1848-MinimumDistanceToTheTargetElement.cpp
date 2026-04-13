#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int i = 0;
        int j = nums.size()-1;
        int res = INT_MAX;
        while(i<=j){
            if(nums[i] == target){
                res = min(res, abs(i-start));
            }
            if(nums[j] == target){
                res = min(res, abs(j-start));
            }
            i++;
            j--;
        }
        return res == INT_MAX ? 0 : res;
    }
};

int main(){
    
    return 0;
}