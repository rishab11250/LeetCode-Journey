class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int single = 0;
        int Double = 0;
        for (int num : nums) {
            if (num >= 10) {
                Double += num;
            } else {
                single += num;
            }
        }
        if (single > Double || single < Double) {
            return true;
        } else {
            return false;
        }
    }
};