#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<long long>  prefixGcd(nums.size());
        long long max = 0;
        for(int i = 0;i<nums.size();i++){
            if(max<nums[i]){
                max = nums[i];
            }
            prefixGcd[i] = gcd((long long)nums[i], max);
        }
        sort(prefixGcd.begin(), prefixGcd.end());
        long long sum = 0;
        int i = 0;
        int j = nums.size()-1;
        while(i<j){
            sum += gcd(prefixGcd[i], prefixGcd[j]);
            i++;
            j--;
        }
        return sum;
    }
};

int main(){
    
    return 0;
}