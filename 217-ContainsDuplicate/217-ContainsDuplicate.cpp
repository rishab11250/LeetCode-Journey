#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int ,int> eh;
        for(int i = 0;i<nums.size();i++){
            if(eh[nums[i]] == 1){
                return true;
            }
            eh[nums[i]]++;
        }
        return false;
    }
};

int main(){
    
    return 0;
}