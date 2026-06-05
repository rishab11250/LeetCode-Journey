#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

class Solution {
public:
    int minimizedStringLength(string s) {
        set<char> single;
        for(char c : s){
            single.insert(c);
        }
        return single.size();
    }
};

int main(){
    
    return 0;
}