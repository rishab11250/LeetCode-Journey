#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<int> ans;
        for(int i : nums){
            if(freq[i]==k){
                continue;
            }
            else{
                ans.push_back(i);
                freq[i]++;
            }
        }
        return ans;
    }
};

int main() {
    return 0;
}