class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;
        int k = n - 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) {
                    sum = sum + mat[i][j];
                }
            }
            
            if (i == k) {
                k--;
                continue;
            } else {
                sum = sum + mat[i][k];
                cout << mat[i][k] << " ";
                k--;
            }
            
        }
        return sum;
    }
};