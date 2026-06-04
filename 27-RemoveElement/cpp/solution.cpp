class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        for (int check : nums) {
            if (check != val) {
                nums[i] = check;
                i++;
            }
        }
        return i;
    }
};