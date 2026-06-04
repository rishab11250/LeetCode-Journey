#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        if(n != nums[n-1] + 1 || n<2 ) return false;
        unordered_map<int, int> map;
        for(int i = 0;i<n;i++){
            map[nums[i]]++;
        }
        for(auto& mp : map){
            if(mp.first == n-1) { 
                if(mp.second != 2) return false; 
            } 
            else if(mp.second != 1){
                return false;
            }
        }
        return true;
    }
};

int main(){
    
    return 0;
}