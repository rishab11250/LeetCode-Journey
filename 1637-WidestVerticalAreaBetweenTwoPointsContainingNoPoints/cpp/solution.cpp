#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int ans = 0;
        sort(points.begin(),points.end());
        for(int i = 1;i<points.size();i++){
            ans = max(ans,points[i][0]-points[i-1][0]);
        }
        return ans;
    }
};

int main(){
    
    return 0;
}