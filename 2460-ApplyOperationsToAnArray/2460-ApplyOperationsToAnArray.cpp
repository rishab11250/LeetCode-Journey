#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> applyOperations(vector<int>& nums) {
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
            nums[i] = nums[i] * 2;
            nums[i+1] = 0;
        }
    }
    vector<int> res = {};
    for(int i:nums){
        if(nums[i] != 0){
            res.push_back(nums[i]);
        }
    }
    for(int i = 0;i<(nums.size() - res.size());i++){
        res.push_back(0);
    }
    return res;
}

int main(){
    vector<int> nums = {1,2,2,1,1,0};
    applyOperations(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}