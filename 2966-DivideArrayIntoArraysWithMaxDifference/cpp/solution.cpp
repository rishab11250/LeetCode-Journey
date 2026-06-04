#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> divideArray(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    // int count = 0;
    // int j = 0;
    // for(int i = 0; i < nums.size(); i++){
    //     if(count != 3){
    //         ans[j].push_back(nums[i]);
    //         count++;
    //     }
    //     else{
    //         count = 1;
    //         j++;
    //         ans.push_back({});
    //         ans[j].push_back(nums[i]);
    //     }
    // }
    // for(int i = 0; i < ans.size(); i++){
    //     if(ans[i][2] - ans[i][0] > k){
    //         ans = {};
    //     }
    // }
    for(int i = 0; i < nums.size(); i+=3){
        if(nums[i+2] - nums[i] > k){
            return {};
        }
        else{
            ans.push_back({nums[i], nums[i+1], nums[i+2]});
        }
    }
    return ans;
}

int main(){
    vector<int> num = {2,4,2,2,5,2};
    auto ans = divideArray(num, 2);
    for(auto i : ans){
        for(auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}