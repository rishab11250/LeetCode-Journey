#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int left = 0;
        int right = 0;
        int count = 0;
        for(int i = 0;i<nums.size();i++){
            right += nums[i];
        }
        for(int i = 1;i<nums.size();i++){
            left += nums[i];
            right = right - nums[i];
            if((left-right)%2==0){
                count++;
            }
        }
        return count;
    }
};

int main(){
    
    return 0;
}