class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> res;
        for(vector<int> i : matrix){
            int count = 0;
            for(int j : i){
                count += j;
            }
            res.push_back(count);
        }
        return res;
    }
};
