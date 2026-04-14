#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans;
        int count = 0;
        for (int i = 0; i < A.size(); i++) {
            if (A[i] == B[i]) {
                count++;
            } else {
                if (find(A.begin(), A.begin() + i , B[i]) != A.begin() + i) {
                    count++;
                }
                if (find(B.begin(), B.begin() + i, A[i]) != B.begin() + i) {
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};

int main(){
    
    return 0;
}