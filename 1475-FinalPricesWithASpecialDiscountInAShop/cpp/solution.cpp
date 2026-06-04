#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;
        for(int i = 0;i<prices.size();i++){
            bool flag = false;
            for(int j = i+1; j<prices.size();j++){
                if(j > i && prices[j] <= prices[i]){
                    ans.push_back(prices[i] - prices[j]);
                    flag = true;
                    break;
                }
            }
            if(!(flag)){
                ans.push_back(prices[i]);
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}