#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        char column = coordinates[0];
        int row = coordinates[1] - '0';
        if ((row % 2 == 0 && (column == 'a' || column == 'c' || column == 'e' || column == 'g')) || 
            (row % 2 == 1 && (column == 'b' || column == 'd' || column == 'f' || column == 'h'))) {
            return true;
        } else {
            return false;
        }
    }
};


int main(){
    
    return 0;
}