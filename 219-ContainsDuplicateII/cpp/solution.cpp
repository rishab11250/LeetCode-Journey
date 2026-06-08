#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> ni;
        for(int i = 0;i<nums.size();i++){
            if(ni.count(nums[i])){
                int diff = abs(ni[nums[i]]-i);
                if(diff<=k) return true;
            }
            ni[nums[i]] = i;
        }
        return false;
    }
};

int main(){
    
    return 0;
}