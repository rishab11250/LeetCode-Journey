#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans = nums[0]+nums[1]+nums[2];
        for(int i = 0;i<nums.size()-2;i++){
            int a = i+1;
            int b = nums.size()-1;
            while(a<b){
                int sum = nums[i]+nums[a]+nums[b];
                if(abs(target-sum)<abs(target-ans)){
                    ans = sum;
                }
                if(sum==target) return target;
                else if(sum<target) a++;
                else b--;
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}