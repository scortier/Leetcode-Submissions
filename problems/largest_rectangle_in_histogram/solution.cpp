class Solution {
 public:
  int largestRectangleArea(vector<int>& heights) {
    heights.push_back(0);

    int n = heights.size();

    stack<int> stk;

    int ans = 0;

    for (int i = 0; i < n;) {
      if (stk.empty() || heights[i] >= heights[stk.top()]) {
        stk.push(i++);
      } else {
        auto idx = stk.top();
        stk.pop();

        ans = max(ans, heights[idx] * (stk.empty() ? i : i - stk.top() - 1));
      }
    }

    return ans;
  }
};