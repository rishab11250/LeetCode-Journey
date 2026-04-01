#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int diff = 0;
        for(int i = 0;i<prices.size();i++){
            if(min>prices[i]){
                min = prices[i];
            }
            diff = max(diff, prices[i] - min);
        }
        return diff;
    }
};

int main(){
    
    return 0;
}