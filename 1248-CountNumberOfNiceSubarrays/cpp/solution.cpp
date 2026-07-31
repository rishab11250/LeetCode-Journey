#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = 0;
        int odd = 0;
        vector<int> prefix(n + 1, 0);
        prefix[0] = 1;
        for(int i : nums){
            if(i%2!=0){
                odd++;
            }
            if(odd-k >= 0){
                ans += prefix[odd-k];
            }
            prefix[odd]++;
        }
        return ans;   
    }
};

int main(){
    
    return 0;
}