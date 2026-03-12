#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int maximum69Number (int num) {
    vector<int> v;
    for(int i=0;i<num;i++){
        v.push_back(num%10);
        num/=10;
    }
    num = 0;
    bool flag = false;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i] == 6 && !(flag)){
            v[i] = 9;
            flag = true;
        }
        num = num*10+v[i];
    }
    return num;
}

int main(){
    
    return 0;
}