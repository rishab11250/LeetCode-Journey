#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int i = x;
        int j = k+x-1;
        while(i<j){
            for(int l = y;l<y+k;l++){
                swap(grid[i][l], grid[j][l]);
            }
            i++;
            j--;
        }
        return grid;
    }
};

int main(){
    
    return 0;
}