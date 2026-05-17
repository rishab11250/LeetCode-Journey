#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class Solution {
public:
    int countKthRoots(int l, int r, int k) {
        if(k==1) return r-l+1;
        int count = 0;
        int max = pow(r,1.0/k) + 1;
        for(int i = 0;i<=max;i++){
            long long a = pow(i,k);
            if(l<=a && a<=r){
                count++;
            }
        }
        return count;
    }
};

int main(){
    
    return 0;
}