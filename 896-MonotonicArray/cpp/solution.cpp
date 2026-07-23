#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int inc = 0;
        int dec = 0;
        for(int i = 1;i<nums.size();i++){
            if(nums[i]>=nums[i-1]){
                inc++;
            }
            if(nums[i]<=nums[i-1]){
                dec++;
            }
        }
        if(inc == nums.size()-1 || dec == nums.size()-1){
            return true;
        }
        return false;
    }
};

int main(){
    
    return 0;
}