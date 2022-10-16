class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
          int n=0,m=matrix[0].size()-1;
          while(n<matrix.size() && m>=0){
          if(matrix[n][m]==target)
             return true;
           else if(matrix[n][m]>target)
             m--;
            else
              n++;
              }
         return false;
       }  
};

