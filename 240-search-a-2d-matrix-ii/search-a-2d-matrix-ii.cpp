class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = 0;
        int col = matrix[0].size()-1;
        while(row>=0 and col>=0 and row<matrix.size() and col<matrix[0].size()){
            if(matrix[row][col]==target)
            return true;
            
            else if(matrix[row][col]<target)
                row++;
            else
                col--;
        }
        return false;
    }
};