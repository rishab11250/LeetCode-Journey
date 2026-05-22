#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total = (n*(n+1))/2;
        int sum = 0;
        for(int i : nums){
            sum += i;
        }
        return total - sum;
    }
};

int main(){
    
    return 0;
}