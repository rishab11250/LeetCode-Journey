#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    bool canAliceWin(int n) {
        int stones = 10;
        bool alice = true;
        while (true) {
            if (n >= stones) {
                n -= stones;
            }
            else {
                if (alice) {
                    return false;
                }
                else {
                    return true;
                }
            }
            stones--;
            alice = !alice;
        }
    }
};


int main(){
    
    return 0;
}