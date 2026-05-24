#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int zeros = 0;
        for(int i : nums){
            if(i==0){
                zeros++;
            }
        }
        int count = 0;
        for(int i =0;i<nums.size()-zeros;i++){
            if(nums[i]==0){
                count++;
            }
        }
        return count;
    }
};

int main() {
    return 0;
}