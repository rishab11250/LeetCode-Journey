#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int ma = *max_element(lights.begin(),lights.end());
        int ans = 0;
        int n = arrivalTime.size();
        for(int a : arrivalTime){
            int r = a%period;
            ans = r<ma?max(ans,0) : max(ans,period-r);
        }
        return ans;
    }
};

int main(){
    
    return 0;
}