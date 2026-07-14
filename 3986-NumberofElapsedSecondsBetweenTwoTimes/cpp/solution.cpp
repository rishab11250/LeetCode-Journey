#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution { 
public: 
    int secondsBetweenTimes(string startTime, string endTime) { 
        int h1 = ((startTime[0] - '0') * 10 + (startTime[1] - '0')) * 3600; 
        int h2 = ((endTime[0] - '0') * 10 + (endTime[1] - '0')) * 3600; 
        int m1 = ((startTime[3] - '0') * 10 + (startTime[4] - '0')) * 60; 
        int m2 = ((endTime[3] - '0') * 10 + (endTime[4] - '0')) * 60; 
        int s1 = (startTime[6] - '0') * 10 + (startTime[7] - '0'); 
        int s2 = (endTime[6] - '0') * 10 + (endTime[7] - '0'); 
        int t1 = h1 + m1 + s1; 
        int t2 = h2 + m2 + s2; 
        return t2 - t1; 
    } 
};


int main(){
    
    return 0;
}