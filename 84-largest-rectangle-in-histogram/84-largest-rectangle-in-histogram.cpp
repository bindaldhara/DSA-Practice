class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
    vector<int> l(n, 0) , r(n, 0);

    stack<int> st;

    for (int i = 0; i < n; i++) {
        while (!st.empty() and heights[st.top()] >= heights[i]) {
            st.pop();
        }
        l[i] = (st.empty()) ? -1 : st.top();
        st.push(i);
    }

    while (!st.empty())
        st.pop();

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() and heights[st.top()] >= heights[i]) {
            st.pop();
        }
        r[i] = (st.empty()) ? n : st.top();
        st.push(i);
    }

    int ans = INT_MIN;

    for (int i = 0; i < n; i++) {
        int distance = r[i] - l[i] - 1;
        ans = max(ans , heights[i] * distance);
    }


    return ans;
    }
};