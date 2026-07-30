#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    string compressedString(string word) {
        string comp = "";
        int i = 0;
        while(i<word.size()){
            char ch = word[i];
            int count = 0;
            while(i<word.size() && word[i] == ch && count < 9){
                count++;
                i++;
            }
            comp += to_string(count);
            comp+=ch;
        }
        return comp;
    }
};

int main(){
    
    return 0;
}