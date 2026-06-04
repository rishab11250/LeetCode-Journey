#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> count;
        for(int i = 1;i<=n;i++){
            count[i]++;
        }
        for(int num : nums){
            count[num]--;
        }
        int duplicate  = 0;
        int missing=0;

        for(auto a :count){
            if(a.second == -1)duplicate = a.first;
            if(a.second == 1)missing = a.first;
        }
        return {duplicate, missing};
    }
};

int main(){
    
    return 0;
}