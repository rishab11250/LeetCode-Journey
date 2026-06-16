#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int compareVersion(string version1, string version2) {
        int v1 = 0;
        int v2 = 0;
        int i = 0;
        int j = 0;
        int n1 = version1.size();
        int n2 = version2.size();
        while(i<n1 || j<n2){
            while(i<n1 && version1[i] != '.'){
                v1 = 10 *v1 + (version1[i] - '0');
                i++;
            }
            while(j<n2 && version2[j] != '.'){
                v2 = 10 *v2 + (version2[j] - '0');
                j++;
            }
            if(v1<v2) return -1;
            if(v1 > v2) return 1;
            i++;
            j++;
            v1 = 0;
            v2 = 0;
        }
        return 0;
    }
};

int main(){
    
    return 0;
}