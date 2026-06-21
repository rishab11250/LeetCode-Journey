#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int total = 0;
        for(int i : costs){
            if(coins<=0){
                return total;
            }
            else{
                if(i > coins){
                    return total;
                }
                else{
                    coins -= i;
                    total++;
                }
            }
        }
        return total;
    }
};

int main(){
    
    return 0;
}