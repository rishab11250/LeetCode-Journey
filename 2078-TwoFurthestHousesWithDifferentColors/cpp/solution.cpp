#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int i = 0;
        int j = n-1;
        while(colors[0] == colors[j]){
            j--;
        }
        while(colors[n-1] == colors[i]){
            i++;
        }
        return max(j, (n-1)-i);
    }
};

int main(){
    
    return 0;
}