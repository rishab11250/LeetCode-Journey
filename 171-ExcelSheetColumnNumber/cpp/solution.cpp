#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        if(columnTitle.size() == 1){
            return columnTitle[0]-'A'+1;
        }
        long long count = 0;
        for(char c : columnTitle){
            count  = count*26 + c-'A'+1;
        }
        return count;
    }
};

int main(){
    
    return 0;
}