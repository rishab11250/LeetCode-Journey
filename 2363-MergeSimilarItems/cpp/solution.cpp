#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int,int> mp;
        for(auto i : items1){
            mp[i[0]] = i[1];
        }
        for(auto i : items2){
            mp[i[0]] += i[1];
        }
        vector<vector<int>> ans;
        for(auto it:mp){
            ans.push_back({it.first,it.second});
        }
        return ans;
    }
};

int main(){
    
    return 0;
}