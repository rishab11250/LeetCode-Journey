#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int> ans;
        for(int i : nums){
            if(i != 0){
                ans.insert(i);
            }
        }
        return ans.size();
    }
};

int main(){
    
    return 0;
}