class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int i = 0;
        int j = 1;
        while (i < arr.size() - 1) {
            if (arr[i] == 2 * arr[j] || arr[i] * 2 == arr[j]) {
                return true;
            }
            j++;
            if (j == arr.size()) {
                i++;
                j = i + 1;
            }
        }
        return false;
    }
};