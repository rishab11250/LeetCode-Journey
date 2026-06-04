#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end());
        reverse(cost.begin(),cost.end());
        int total =0;
        for(int i  = 0;i<cost.size();i++){
            if((i+1)%3==0){
                continue;
            }
            else{
                total += cost[i];
            }
        }
        return total;
    }
};

int main(){
    
    return 0;
}