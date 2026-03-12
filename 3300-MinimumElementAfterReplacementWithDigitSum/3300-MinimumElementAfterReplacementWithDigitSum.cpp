#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int minElement(vector<int>& nums) {
    int min = INT_MAX;
    for(int i=0;i<nums.size();i++){
        int temp = nums[i];
        int sum = 0;
        while(temp){
            sum = sum + temp%10;
            temp/=10;
        }
        if(sum<min){
            min = sum;
        }
    }
    return min;
}

int main(){
    
    return 0;
}