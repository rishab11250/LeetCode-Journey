#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int totalEven = 0;
        int totalOdd = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] % 2 == 0)
                totalEven++;
            else
                totalOdd++;
        }
        int even = 0;
        int odd = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] % 2 == 0){
                nums[i] = totalOdd - odd;
                even++;
            }
            else{
                nums[i] = totalEven - even;
                odd++;
            }
        }
        return nums;
    }
};

int main(){
    
    return 0;
}