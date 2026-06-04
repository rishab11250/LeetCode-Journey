class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;
        for (vector i : accounts) {
            int sum = 0;
            for (int j : i) {
                sum += j;
            }
            if (sum > max) {
                max = sum;
            }
        }
        return max;
    }
};