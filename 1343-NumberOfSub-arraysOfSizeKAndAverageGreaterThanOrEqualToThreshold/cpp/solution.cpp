#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += arr[i];
        }
        int ans = 0;
        if (sum / k >= threshold) {
            ans++;
        }
        int n = arr.size();
        for (int i = k; i < n; i++) {
            sum = sum + arr[i] - arr[i - k];
            if (sum / k >= threshold) {
                ans++;
            }
        }
        return ans;
    }
};

int main(){
    
    return 0;
}