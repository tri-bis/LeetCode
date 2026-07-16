class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        // int row = 0;
        // int col = 1;
        // while (row < m) {
        //     int i = row;
        //     int j =0;
        //     int value = matrix[i][0];
        //     while(i<m && j<n) {
                    
        //             cout<<matrix[i][j]<<" ";
        //             if (matrix[i][j] != value) {
        //                 return false;
        //             }
        //         i++;
        //         j++;
        //     }
        //     row++;
        // }
        
        // while (col < n) {
        //     int i = 0;
        //     int j = col;
        //     int value = matrix[0][j];
        //     while(i<m && j<n) {
                    
        //             cout<<matrix[i][j]<<" ";
        //             if (matrix[i][j] != value) {
        //                 return false;
        //             }
        //         i++;
        //         j++;
        //     }
        //     col++;
        // }
        for(int i =0;i<m-1;i++){
            for(int j =0 ;j<n-1;j++){
                if(matrix[i][j] != matrix[i+1][j+1]){return false;}
            }
        }
        return true;
    }
};