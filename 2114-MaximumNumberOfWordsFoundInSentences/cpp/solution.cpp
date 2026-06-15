#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int most = 0;
        for (string sentence : sentences) {
            int count = 1;
            for (char ch : sentence) {
                if (ch == ' ') {
                    count++;
                }
            }
            most = max(most,count);
        }
        return most;
    }
};

int main(){
    
    return 0;
}