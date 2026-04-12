#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string trafficSignal(int timer) {
        if(timer == 0){
            return "Green";
        }
        else if(timer == 30){
            return "Orange";
        }
        else if(timer > 30 && timer <= 90){
            return "Red";
        }
        return "Invalid";
    }
};

int main(){
    
    return 0;
}