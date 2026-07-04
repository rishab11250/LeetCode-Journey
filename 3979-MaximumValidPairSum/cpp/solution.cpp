#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        int maxx=nums[0];
        int ans=0;
        for(int j = k;j<n;j++){
            maxx=max(maxx,nums[j-k]);
            ans=max(ans,maxx+nums[j]);
        }
        return ans;
    }
};

int main(){
    
    return 0;
}