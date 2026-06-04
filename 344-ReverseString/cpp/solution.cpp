#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = 0;
        int j = s.size()-1;
        while(i<j){
            char temp = s[j];
            s[j] = s[i];
            s[i] = temp;
            i++;
            j--;
        }
    }
};

int main(){
    
    return 0;
}