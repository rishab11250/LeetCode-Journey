// Last updated: 3/6/2026, 12:40:17 AM
class Solution {
public:
    int averageValue(vector<int>& nums) {
        int count = 0;
        int sum = 0;
        for(int n : nums){
            if(n%6==0){
                sum += n;
                count++;
            }
        }
        if(count == 0){
            return 0;
        }
        else{
            return sum / count;
        }
    }
};