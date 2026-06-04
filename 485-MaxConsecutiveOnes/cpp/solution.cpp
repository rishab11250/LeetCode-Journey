class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_ones = 0;
        int streak = 0;
        
        for (int num : nums) {
            if (num == 1) {
                streak++;
            } else {
                streak = 0;
            }
            max_ones = max(max_ones, streak);
        }
        
        return max_ones;
    }
};