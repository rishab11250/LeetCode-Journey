#include <iostream>
#include <string>
#include <set>
using namespace std;

class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count = 0;
        set<char> a;
        set<char> b;
        for(char c : word){
            if(islower(c)){
                a.insert(c);
            }
            else{
                b.insert(c+32);
            }
        }
        for(char c : a){
            count += b.count(c);
        }
        return count;
    }
};

int main() {
    return 0;
}