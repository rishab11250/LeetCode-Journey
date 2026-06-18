#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minu = 6.0*minutes;
        double hr = 30.0*(hour) + 0.5 * minutes;
        double diff = abs(hr-minu);
        return min(diff,360.0-diff);
    }
};

int main(){
    
    return 0;
}