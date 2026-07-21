#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int sum = 0;
        int start = n - k;
        int end = n - 1;
        for (int i = start; i <= end; i++) {
            sum += cardPoints[i];
        }
        int ans = sum;
        for(int i = 0;i<k;i++){
            sum -= cardPoints[start];
            start = (start+1)%n;
            end = (end+1)%n;
            sum += cardPoints[end];
            ans = max(ans,sum);
        }
        return ans;
    }
};

int main(){
    
    return 0;
}