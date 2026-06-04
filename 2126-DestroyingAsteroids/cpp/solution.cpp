#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long ma = mass * 1LL;
        for(int i : asteroids){
            if(i>ma){
                return false;
            }
            else{
                ma += i;
            }
        }
        return true;
    }
};

int main() {{
    return 0;
}