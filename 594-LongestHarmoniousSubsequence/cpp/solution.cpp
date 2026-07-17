#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int n : nums){
            freq[n]++;
        }
        int ans = 0;
        for (auto map : freq) {
            if (freq.count(map.first + 1)) {
                ans = max(ans, map.second + freq[map.first + 1]);
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}