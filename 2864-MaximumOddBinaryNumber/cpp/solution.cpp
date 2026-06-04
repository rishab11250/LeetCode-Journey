#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string maximumOddBinaryNumber(string s) {
    string res = "";
    int one = -1;
    int zero = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            one++;
        }
        else{
            zero++;
        }
    }
    for(int i=1;i<=one;i++){
        res += "1";
    }
    for(int i=1;i<=zero;i++){
        res += "0";
    }
    return res += "1";
}

int main(){
    
    return 0;
}