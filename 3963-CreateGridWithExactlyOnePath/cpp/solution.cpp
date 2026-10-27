#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> grid(m,string(n-1,'#')+'.');
        grid[0] = string(n,'.');
        return grid;
    }
};

int main(){
    
    return 0;
}