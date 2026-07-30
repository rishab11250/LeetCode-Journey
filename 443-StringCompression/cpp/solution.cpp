#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> replace;
        int count = 1;
        for(int i = 1;i<chars.size();i++){
            if(chars[i-1]==chars[i]){
                count++;
            }
            else{
                replace.push_back(chars[i-1]);
                if(count > 1){
                    string cnt = to_string(count);
                    for (char c : cnt) replace.push_back(c);
                }
                count = 1;
            }
        }
        replace.push_back(chars.back());
        if(count > 1){
            string cnt = to_string(count);
            for (char c : cnt) replace.push_back(c);
        }
        chars = replace;
        return chars.size();
    }
};

int main(){
    
    return 0;
}