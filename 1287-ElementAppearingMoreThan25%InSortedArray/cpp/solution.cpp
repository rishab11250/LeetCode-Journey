#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        map<int,int> mp;
        int p = arr.size()/4;
        for(int n : arr){
            mp[n]++;
            if(mp[n]>p){
                return n;
            }
        }
        return 0;
    }
};

int main(){
    
    return 0;
}