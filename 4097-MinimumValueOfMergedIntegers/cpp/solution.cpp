#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int ans = INT_MAX;
        for(int i = 0;i<nums.size();i+=2){
            int b = nums[i+1];
            int a = nums[i];
            int temp = b;
            int size = 1;
            while(temp>0){
                size *= 10;
                temp /= 10;
            }
            int num = a*size + b;
            ans = min(ans,num); 
        }
        return ans;
    }
};

int main(){
    
    return 0;
}