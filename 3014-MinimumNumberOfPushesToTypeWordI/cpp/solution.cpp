#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumPushes(string word) {
        if(word.size()<=8){
            return word.size();
        }
        int count = 0;
        for(int i =0;i<word.size();i++){
            count += i/8 + 1;
        }
        return count;
    }
};

int main(){
    
    return 0;
}