#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    int countAsterisks(string s) {
        int count =  0;
        int countBar = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i] == '|'){
                countBar++;
            }
            if(s[i] == '*' && countBar % 2 == 0){
                count++;
            }
        }
        return count;
    }
};


int main(){
    
    return 0;
}