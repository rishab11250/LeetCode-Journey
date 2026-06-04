class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        auto reverse=[&](int i,int j) {
            while (i < j) {
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
        };
        reverse(0, nums.size() - 1);
        reverse(0, k - 1);
        reverse(k, nums.size() - 1);
    }
};