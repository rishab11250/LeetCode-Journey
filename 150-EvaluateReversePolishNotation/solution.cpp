#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> toke;
        for(int i = 0;i<tokens.size();i++){
            if(tokens[i] == "+" || tokens[i] == "-" ||tokens[i] == "*" ||tokens[i] == "/"){
                int n = toke.size();
                int right = toke[n-1];
                int left = toke[n-2];
                toke.pop_back();
                toke.pop_back();
                if(tokens[i] == "+") toke.push_back(right+left);
                else if(tokens[i] == "-") toke.push_back(left-right);
                else if(tokens[i] == "*") toke.push_back(right*left);
                else if(tokens[i] == "/") toke.push_back(left/right);
            }
            else{
                toke.push_back(stoi(tokens[i]));
            }
        }
        return toke.back();
    }
};

int main(){
    
    return 0;
}