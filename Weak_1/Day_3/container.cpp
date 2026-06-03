class Solution {
public:
    int maxArea(vector<int>& height) {

        unsigned int left = 0;
        unsigned int right = height.size() - 1;
        unsigned maxarea = 0;

        while (left < right) {

            unsigned int currwidth = right - left;
            unsigned int currheight = min(height[right], height[left]);
            unsigned int currarea = currwidth * currheight;
            maxarea = max(maxarea, currarea);

            if (height[left] <= height[right])
                left++;

            else
                right--;
        }
        return maxarea;
    }
};