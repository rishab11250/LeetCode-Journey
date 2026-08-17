#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count = 0;
        for(int i = 1;i<nums.size();i++){
            while(nums[i-1] >= nums[i]){
                nums[i]++;
                count++;
            }
        }
        return count;
    }
};

int main(){
    
    return 0;
}