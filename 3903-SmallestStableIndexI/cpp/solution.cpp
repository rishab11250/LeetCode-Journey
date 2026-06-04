#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        for(int i = 0;i<nums.size();i++){
            int m = 0;
            for(int j = 0;j<=i;j++){
                m = max(m, nums[j]);
            }
            int n = INT_MAX;
            for(int j = i;j<nums.size();j++){
                n = min(n, nums[j]);
            }
            if(k>= m - n){
                return i;
            }
        }
        return -1;
    }
};

int main(){
    
    return 0;
}