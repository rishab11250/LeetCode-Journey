#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool bulky = false;
        if (length >= 10000 || width >= 10000 || height >= 10000 ||
            (1LL * length * width *  height) >= 1000000000) {
            bulky = true;
        }
        bool heavy = (mass >= 100);
        if (mass >= 100) {
            heavy = true;
        }

        if (bulky && heavy) {
            return "Both";
        } else if (!bulky && !heavy) {
            return "Neither";
        } else if (bulky) {
            return "Bulky";
        } else { 
            return "Heavy";
        }
    }
};

int main(){
    
    return 0;
}