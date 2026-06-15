#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        for (char &c : sentence) c = tolower(c);
        bool check = true;
        char c = 'a';
        while (c <= 'z') {
            if (sentence.find(c) == string::npos) {
                check = false;
                break;
            }
            c++;
        }
        
        return check;
    }
};


int main(){
    
    return 0;
}