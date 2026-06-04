class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;
        int i = 0;
        int j = height.size()-1;
        while(i<j){
            int h = min(height[i], height[j]);
            max_area = max(max_area, ((j-i)*h));
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return max_area;
    }
};