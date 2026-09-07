#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size();
        int total = 0;
        for(int i = 0;i<n-1;i++){
            if(s[i]==s[i+1]){
                total++;
            }
        }
        if(s[0] == s.back()){
            total++;
        }
        if(k==total){
            return n-total;
        }
        if(k==total-1){
            return total;
        }
        return 0;
    }
};

int main(){
    
    return 0;
}