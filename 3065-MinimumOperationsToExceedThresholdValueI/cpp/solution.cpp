#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        for(int i : nums){
            if(k>i){
                count++;
            }
        }
        return count;
    }
};

int main(){
    
    return 0;
}