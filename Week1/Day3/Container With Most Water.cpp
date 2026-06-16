class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = 0;
        int left = 0;
        int right = height.size() - 1;
        
        while (left < right) {
            int width = right - left;
            int h = height[left] < height[right] ? height[left] : height[right];
            int current_water = width * h;
            
            if (current_water > max_water) {
                max_water = current_water;
            }
            
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return max_water;
    }
};
