#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int ans = INT_MAX;
        for(vector<int> task : tasks){
            ans = min(ans,task[0]+task[1]);
        }
        return ans;
    }
};

int main(){
    
    return 0;
}