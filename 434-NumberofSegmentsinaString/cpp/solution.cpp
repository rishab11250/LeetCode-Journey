#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s);
        string word;
        int count = 0;
        while(ss>>word) count++;
        return count;
    }
};

int main(){
    
    return 0;
}