#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> result;

        for (auto& num : nums) {
            bool flag = false;
            for (int i = 1; i <= num; i++) {
                if ((i | i + 1) == num) {
                    result.push_back(i);
                    flag = true;
                    break;
                }
            }
            if (!flag) result.push_back(-1);
        }

        return result;
    }
};

int main(){
    
    return 0;
}