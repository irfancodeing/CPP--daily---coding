  #include <bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    int maxArea = 0;

     
    for (int i = 0; i < n; i++) {
        int height = heights[i];

        // Expand left
        int left = i;
        while (left > 0 && heights[left-1] >= height) {
            left--;
        }

        // Expand right
        int right = i;
        while (right < n-1 && heights[right+1] >= height) {
            right++;
        }

        // Width = right - left + 1
        int width = right - left + 1;
        int area = height * width;

        maxArea = max(maxArea, area);
    }

    return maxArea;
}

int main() {
    vector<int> heights = {2,1,5,6,2,3};
    cout << "Largest Rectangle Area: " << largestRectangleArea(heights) << endl;
    return 0;
}
