// Last updated: 3/6/2026, 12:45:14 AM
class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> result;
        for(int i = 0; i < queries.size(); i++){
            nums[queries[i][1]] = nums[queries[i][1]] + queries[i][0];
            int sum = 0;
            for(int j = 0; j < nums.size(); j++){
                if(nums[j]%2 == 0){
                    sum += nums[j];
                }
            }
            result.push_back(sum);
        }
        return result;
    }
};