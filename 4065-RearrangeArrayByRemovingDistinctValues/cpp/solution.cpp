#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int,int> mp;
        for(int i : nums){
            mp[i]++;
        }
        vector<int> ans;
        while(!mp.empty()){
            for (auto it = mp.begin(); it != mp.end(); ) {
                ans.push_back(it->first);
                it->second--;
                if (it->second == 0) {
                    it = mp.erase(it); 
                } else {
                    ++it; 
                }
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}