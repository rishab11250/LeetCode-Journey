#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int high = INT_MIN;
        int low = INT_MAX;
        for(int i : nums){
            high = max(high,i);
            low = min(low,i);
        }
        return gcd(high,low);
    }
};

int main(){
    
    return 0;
}