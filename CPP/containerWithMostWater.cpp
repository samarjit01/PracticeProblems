class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int i = 0, j = height.size() - 1;
        while (i < j) {
            int h = min(height[i], height[j]);
            area = max(area, (j - i) * h);
            if (height[i] <= height[j]){
                i++;
            } 
            else{
                j--;
            }

        }
        return area;
        
    }
};