#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count = 0;
        for (int i = 0; i < words.size(); i++) {
            for (int j = i + 1; j < words.size(); j++) {
                if ((words[i][0] == words[j][0] && words[i][1] == words[j][1]) || (words[i][0] == words[j][1] && words[i][1] == words[j][0])){
                        count++;
                        continue;
                    }
            }
        }
        return count;
    }
};

int main(){
    
    return 0;
}