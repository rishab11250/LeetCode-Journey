#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        long long sum = 0;
        int count = 0;
        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>0){
                count++;
            }
            else{
                break;
            }
        }
        return count;
    }
};

int main(){
    
    return 0;
}