#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>> mp;
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        int count = 0;
        for(auto a : mp){
            if(a.second.size() == 3 && a.second[1]-a.second[0]==a.second[2]-a.second[1]){
                count++;
            }
        }
        return count;
    }
};

int main(){
    
    return 0;
}