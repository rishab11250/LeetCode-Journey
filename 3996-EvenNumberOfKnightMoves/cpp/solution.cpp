#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        return (start[0] + start[1] + target[0] + target[1]) % 2 == 0;
    }
};

int main(){
    
    return 0;
}