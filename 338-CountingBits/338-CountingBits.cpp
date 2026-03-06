#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string numBinary(int n){
        if(n == 0){
            return "0";
        }
        string binary = "";
        while(n > 0){
            binary += to_string(n % 2);
            n /= 2;
        }
        reverse(binary.begin(),binary.end());
        return binary;
    }

int sum(string binary){
        int sum = 0;
        for(int i = 0;i<binary.length();i++){
            if(binary[i] == '1'){
                sum++;
            }
        }
        return sum;
    }

vector<int> countBits(int n) {
    vector<int> result = {};
    for(int i = 0;i<=n;i++){
        result.push_back(sum(numBinary(i)));
    }
}

int main(){
    
    return 0;
}