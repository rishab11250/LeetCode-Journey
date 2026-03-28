#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            int len = 0;
            int maxD = 0;
            while(nums[i] > 0){
                int digit = nums[i] % 10;
                nums[i] /= 10;
                len++;
                maxD = max(maxD, digit);
            }
            int one = 0;
            for(int i = 1; i<=len; i++){
                one *= 10;
                one++;
            }
            sum += one*maxD;
        };
        return sum;
    }
};

int main(){
    
    return 0;
}