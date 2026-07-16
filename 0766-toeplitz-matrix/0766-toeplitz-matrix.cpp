class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int row = 0;
        int col = 1;
        while (row < m) {
            int i = row;
            int j =0;
            int value = matrix[i][0];
            while(i<m && j<n) {
                    
                    cout<<matrix[i][j]<<" ";
                    if (matrix[i][j] != value) {
                        return false;
                    }
                i++;
                j++;
            }
            row++;
        }
        
        while (col < n) {
            int i = 0;
            int j = col;
            int value = matrix[0][j];
            while(i<m && j<n) {
                    
                    cout<<matrix[i][j]<<" ";
                    if (matrix[i][j] != value) {
                        return false;
                    }
                i++;
                j++;
            }
            col++;
        }
        
        return true;
    }
};