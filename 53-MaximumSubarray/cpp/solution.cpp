#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN;
        int current_sum = 0;
        int left = 0;
        for(int right = 0;right<nums.size();right++){
            current_sum += nums[right];
            ans = max(ans,current_sum);
            if(current_sum<0){
                current_sum = 0;
                left = right +1;
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}