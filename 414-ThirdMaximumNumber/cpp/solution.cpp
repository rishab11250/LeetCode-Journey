#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        if(nums.size() ==1){
            return nums[0];
        }
        else if(nums.size() ==2){
            return max(nums[0],nums[1]);
        }
        long long first = LLONG_MIN;
        long long second = LLONG_MIN;
        long long third = LLONG_MIN;
        for(long long i : nums){
            if(i>first){
                third = second;
                second = first;
                first = i;
            }
            else if(i>second && i<first){
                third = second;
                second = i;
            }
            else if(i>third && i<second && i<first){
                third = i;
            }
        }
        return third == LLONG_MIN ? first : third;
    }
};

int main(){
    
    return 0;
}