#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp = arr;
        set<int> unique;
        sort(temp.begin(), temp.end());
        for(int i : temp){
            unique.insert(i);
        }
        unordered_map<int,int> vtor;
        int r = 1;
        for(int i : unique){
            vtor[i] = r++;
        }
        for(int i = 0;i<arr.size();i++){
            arr[i] = vtor[arr[i]];
        }
        return arr;
    }
};

int main(){
    
    return 0;
}