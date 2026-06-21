#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxDistance(string moves) {
        int x = 0;
        int y = 0;
        int dash = 0;
        for(char c : moves){
            if(c == 'U'){
                y++;
            }
            else if(c == 'D'){
                y--;
            }
            else if(c == 'L'){
                x--;
            }
            else if(c == 'R'){
                x++;
            }
            else{
                dash++;
            }
        }
        return abs(x) + abs(y) + dash;
    }
};

int main(){
    
    return 0;
}