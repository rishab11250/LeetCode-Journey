#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        int res  = -1;
        unordered_map<int, int> map;
        for(int i: arr){
            map[i]++;
        }
        for(auto &i : map){
            if(i.second == i.first){
                res = max(i.first,res);
            }
        }
        return res;
    }
};

int main(){
    
    return 0;
}