#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = 0;
        int sum = 0;
        for(int i : gain){
            sum += i;
            ans = max(ans,sum);
        }
        return ans;
    }
};

int main(){
    
    return 0;
}