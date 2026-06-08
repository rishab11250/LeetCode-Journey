#include <vector>
using namespace std;

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> left;
        vector<int> middle;
        vector<int> right;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < pivot) {
                left.push_back(nums[i]);
            } else if (nums[i] == pivot) {
                middle.push_back(nums[i]);
            } else {
                right.push_back(nums[i]);
            }
        }
        left.insert(left.end(),middle.begin(),middle.end());
        left.insert(left.end(),right.begin(),right.end());
        return left;
    }
};

int main() {

    return 0;
}