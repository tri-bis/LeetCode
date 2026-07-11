class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> ans(n * m);
        int left = 0;
            int right = n - 1;
            int top = 0;
            int bottom = m - 1;
            int idx =0;
        while (top <= bottom && left <= right) {
            // top
            for (int j = left; j <= right; j++) {
                ans[idx] = matrix[top][j];
                idx++;
            }
            // right
            for (int i = top+1; i <= bottom; i++) {
                ans[idx] = matrix[i][right];
                idx++;
            }

            // bottom
            if(top!=bottom){
            for (int j = right - 1; j >= left; j--) {
                ans[idx] = matrix[bottom][j];
                
                idx++;
            }}

            // left
            if(left!=right){
            for (int i = bottom-1; i >= top+1; i--) {
                ans[idx] = matrix[i][left];
                
                idx++;
            }}
            top++;
            left++;
            right--;
            bottom--;
        }
        for (int j = 0; j <= right; j++) {
            cout << ans[j] << " ";
        }
        return ans;
    }
};