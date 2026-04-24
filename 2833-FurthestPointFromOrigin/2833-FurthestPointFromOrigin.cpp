#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int left = 0;
        int right = 0;
        for( char c : moves){
            if(c == 'L'){
                left++;
            }
            else if(c == 'R'){
                right++;
            }
        }
        int idk = moves.size()-(left+right);
        return left>=right ? left-right+idk : right-left+idk;
    }
};

int main(){
    
    return 0;
}