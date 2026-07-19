#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1) return s;
        long long noOfInc = n/2;
        long long noOfDec = noOfInc-1;
        return s+noOfInc*m-noOfDec;
    }
};

int main(){
    
    return 0;
}