#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        int ans = -1;
        int mi = INT_MAX;
        int n = drones.size();
        for(int i = 0;i<n;i++){
            int diff = (abs(drones[i][0]-target[0])) + (abs(drones[i][1]-target[1]));
            if(diff<=drones[i][2]){
                if(diff<mi){
                    mi = diff;
                    ans = i;
                }
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}