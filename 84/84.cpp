
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);

        int maxArea = 0;
        std::stack<int> stk;
        // Add a sentinel to ensure all bars are popped from the stack at the end
        heights.push_back(0);
        int size = heights.size();

        for (int i = 0; i < size; ++i) {
            while (!stk.empty() && heights[i] < heights[stk.top()]) {
                const int h = heights[stk.top()];
                stk.pop();
                const int w = stk.empty() ? i : i - stk.top() - 1; // Width of the rectangle
                maxArea = std::max(maxArea, h * w);
            }
            stk.push(i);
        }

        return maxArea;
    }
};
