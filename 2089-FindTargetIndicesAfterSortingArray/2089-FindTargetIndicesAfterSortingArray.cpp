#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int count = 0;
        int equal = 0;
        vector<int> ans;
        for(int i : nums){
            if(i<target){
                count++;
            }
            else if(i == target){
                equal++;
            }
        }
        for(int i = count;i<count+equal;i++){
            ans.push_back(i);
        }
        return ans;
    }
};

int main(){
    
    return 0;
}