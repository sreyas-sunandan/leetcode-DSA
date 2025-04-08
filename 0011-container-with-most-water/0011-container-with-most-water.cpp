class Solution {
public:
    int maxArea(vector<int>& height) {
     int left = height.size() - 1;
     int right = 0;
     int maxarea = 0;
     if (left == 1) {
        return (min(height[left], height[right])); 
     }
     while (left > right) {
        maxarea = max(maxarea, min(height[left], height[right])*(left - right));
        if (height[right] < height[left]) {
            right++;
        }
        else {
           left--;
        }
     }
     return maxarea;
    }
};