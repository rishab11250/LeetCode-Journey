#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        unordered_map<int, int> store;
        for(int a = 0;1LL*a*a*a <= n;a++){
            for(int b = a;1LL*b*b*b<=n;b++){
                long long sum = (a*a*a) + (b*b*b);
                if(sum > n){
                    break;
                }
                store[sum]++;
            }
        }
        vector<int> res = {};
        for(auto &i : store){
            if(i.second >=2){
                res.push_back(i.first);
            }
        }
        sort(res.begin(), res.end());
        return res;
    }
};

int main(){
    
    return 0;
}