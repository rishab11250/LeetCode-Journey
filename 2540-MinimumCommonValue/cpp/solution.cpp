#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        if(nums1[nums1.size()-1]<nums2[0]||nums2[nums2.size()-1]<nums1[0]) return -1;
        int n1 = nums1.size(), n2=nums2.size();
        int i =0;
        int j = 0;
        while(i<n1&&j<n2){
            int x = nums1[i];
            int y = nums2[j];
            if(x==y) return x;
            else if(x>y){
                j++;
            }
            else i++;
        }
        return -1;
    }
};

int main(){
    
    return 0;
}