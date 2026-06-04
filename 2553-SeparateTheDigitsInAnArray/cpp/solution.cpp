#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i : nums){
            string s = to_string(i);
            for(char c : s){
                int digit = c - '0';
                ans.push_back(digit);
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}