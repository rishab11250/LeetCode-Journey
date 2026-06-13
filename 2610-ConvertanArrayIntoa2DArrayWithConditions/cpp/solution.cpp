#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> freq;
        int most = 0;
        vector<vector<int>> ans;
        for(int i : nums){
            freq[i]++;
            most = max(most,freq[i]);
        } 
        for(int i = 1;i<=most;i++) ans.push_back({});
        for(auto it : freq){
            for(int i = 0;i<it.second;i++){
                ans[i].push_back(it.first);
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}