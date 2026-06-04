#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n = words.size();
        int res = n;
        int i = startIndex;
        int count = 0;
        while(true){
            if(words[i] == target){
                res = min(res, (i - startIndex + n) % n);
            }
            count++;
            i = (i + 1) % n;
            if(count>=n){
                break;
            }
        }
        i = startIndex;
        count = 0;
        while(true){
            if(words[i] == target){
                res = min(res, (startIndex - i + n) % n);
            }
            count++;
            i = (i - 1  +n) % n;
            if(count>=n){
                break;
            }
        }
        return res == n?-1:res;
    }
};

int main(){
    
    return 0;
}