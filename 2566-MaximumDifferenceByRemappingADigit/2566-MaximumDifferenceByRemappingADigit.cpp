#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        string max = s, min = s;
        for(int i = 0;i<max.size();i++){
            if(max[i] != '9'){
                char replace = max[i];
                for(char &c : max){
                    if(c == replace){
                        c = '9';
                    }
                }
                break;
            }
        }
        for(int i = 0;i<min.size();i++){
            if(min[i] != '0'){
                char replace = min[i];
                for(char &c : min){
                    if(c == replace){
                        c = '0';
                    }
                }
                break;
            }
        }
        return stoi(max)-stoi(min);
    }
};

int main(){
    
    return 0;
}