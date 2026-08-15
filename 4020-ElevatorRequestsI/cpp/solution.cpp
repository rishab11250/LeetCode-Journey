#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int ans = requests[0];
        for(int i  = 1;i<requests.size();i++){
            int diff = abs(requests[i]-requests[i-1]);
            ans += diff;
        }
        return ans;
    }
};

int main(){
    
    return 0;
}